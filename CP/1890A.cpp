#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        for(int i = 0 ; i < n; ++i){
            cin >> arr[i];
        }
        // if(n == 2){
        //     cout << "Yes\n";
        // }else if(n % 2 == 0){
        //     cout << "No\n"
        // }
        bool istrue = true ;
        for(int i = 0 ; i < n - 2 ; i = i + 2){
            if(arr[i+1] != arr[i+3]){
                istrue = false;
                break;   
            }else if(arr[i] != arr[i+2]){
                istrue = false ;
                break;
            }
        }
        // for(int i = 0 ; i < n - 2 ; i = i + 2){
        //     if(arr[i] == arr[i+2]){
        //         istrue = true;
        //     }else{
        //         istrue = false;
        //     }
        // }
        if(istrue){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}