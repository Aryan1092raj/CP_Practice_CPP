#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n;
        cin >> n ;
        int arr[n];
        for(int i = 0 ; i<n ; ++i){
            cin >> arr[i];
        }
        int max = arr[0];
        for(int k = 0; k<n ; ++k){
            if(max < arr[k]){
                max = arr[k];
            }
            // if(max == k){
            //     arr[k]-- ;

            // }
        }
        for(int i = 0 ; i<n ; ++i){
            cout << arr[i];
        }
        if (arr == 0){
            cout << "YES" << "\n";
        }else{
            cout << "NO" <<"\n";
        }
        
    }
}
    
