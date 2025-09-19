#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        int arr[n];
        for(int i = 0 ; i<n ; ++i){
                cin >> arr[i] ;
        }
        int initial = arr[0];
        for(int i = 0 ; i<n ; ++i){
                if(arr[i]<initial){
                    swap(arr[i],initial);
                    initial = arr[i];
                }
        }
        for(int i = 0 ; i<n ; ++i){
                cout<< arr[i] <<endl;
        }

    }
}