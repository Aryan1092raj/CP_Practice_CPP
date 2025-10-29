#include <bits/stdc++.h>
using namespace std ;

// void sort_arr(int arr[], int n){
//     int st = arr[0];
//     for(int i = 1; i<n; ++i){
//         if(st>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//             st = arr[i+1];
//         }else{
//             continue;
//         }
//     }

// }

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n ; ++i){
            cin >> arr[n];
        }
        std::sort(arr,arr + n) ;
        int sum = 0 ;
        for(int i = 0; i <n ; ++i){
            // if(arr[i]%2 == 0){
            //     sum += arr[i];
            // }
            // cout<<sum <<endl;
            cout<<arr[i]<<endl;
        }        
    }
}