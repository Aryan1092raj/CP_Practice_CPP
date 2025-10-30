#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int inp;
            cin >> inp;
            arr.push_back(inp);
        }
        
        if (arr[0] == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
            
        }
        
        
        
    }
}