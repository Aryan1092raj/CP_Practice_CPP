#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; ++i){
        int mindIndex = i;
        for(int j = i+1 ; j < n ; ++j){
            if(arr[j] < arr[mindIndex]){
                mindIndex = j;
            }
        }
        swap(arr[i],arr[mindIndex]);
    }
    for(int i = 0 ; i < n ; ++i){
        cout << arr[i] << " ";
    }

}