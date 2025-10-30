#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long ans = 0;
        while (n > 2) {
            ans += n / 3;
            n = (n + 2) / 3; 
        }
        cout << ans << endl;
    }
}
