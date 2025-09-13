#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x ,n ;
        cin >>  x >> n;
        int arr[n]; 
        int sum = 0;
        for(int i = 0; i<n ; i +=2){
            arr[i] = x;
           }
        for(int i = 1; i<n ; i +=2){
            arr[i] = -x;
           }
        for(int i = 0; i<n ; i +=2){
            cout<< arr[i]<<endl;
           }
        //cout<<sum;
    }
}