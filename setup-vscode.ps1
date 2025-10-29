# VS Code Default Setup Script
Write-Host "Setting up VS Code defaults..." -ForegroundColor Cyan

# 1. Create settings.json
$settingsPath = "$env:APPDATA\Code\User\settings.json"
$settings = @'
{
    "editor.fontSize": 14,
    "editor.tabSize": 4,
    "editor.insertSpaces": true,
    "editor.wordWrap": "on",
    "files.autoSave": "afterDelay",
    "code-runner.runInTerminal": true,
    "code-runner.saveFileBeforeRun": true,
    "code-runner.executorMap": {
        "cpp": "cd $dir && g++ -std=c++17 -O2 $fileName -o $fileNameWithoutExt.exe && .\\$fileNameWithoutExt.exe"
    },
    "terminal.integrated.defaultProfile.windows": "PowerShell",
    "workbench.startupEditor": "none"
}
'@
Set-Content -Path $settingsPath -Value $settings

# 2. Create tasks.json
$vscodeDir = "$env:APPDATA\Code\User\\.vscode"
if (-not (Test-Path $vscodeDir)) {
    New-Item -ItemType Directory -Path $vscodeDir -Force
}

$tasks = @'
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build and Run C++",
            "type": "shell",
            "command": "powershell",
            "args": [
                "-Command",
                "g++ -std=c++17 -O2 \\${file} -o \\${fileDirname}\\\\\\${fileBasenameNoExtension}.exe && \\${fileDirname}\\\\\\${fileBasenameNoExtension}.exe"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "presentation": {
                "echo": true,
                "reveal": "always"
            },
            "problemMatcher": ["\\"]
        }
    ]
}
'@
Set-Content -Path "$vscodeDir\\tasks.json" -Value $tasks

Write-Host "VS Code setup complete! Restart VS Code." -ForegroundColor Green
