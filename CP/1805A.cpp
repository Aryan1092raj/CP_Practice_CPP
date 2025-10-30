#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    
    while(t--){
        int n ; cin >> n;
        vector <int> arr(n);
        int xor_1 = 0;
        for(int i = 0 ; i < n ; ++i){
            cin >> arr[i];
            xor_1 ^= arr[i];
        }
        if(n % 2 == 1){
            cout << xor_1 << '\n'; 
        }else {
            if (xor_1 == 0){
                cout << xor_1 << '\n';
            }else{
                cout << -1 << '\n';
            }
        }
    }
}