#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >>k;
        bool found = false;
        int arr[n];
        for(int i = 0; i<n ;++i){
            cin >> arr[i];
            if(arr[i] == k){
                found = true ;
            }
        }
        if(found == true){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }
    }
}