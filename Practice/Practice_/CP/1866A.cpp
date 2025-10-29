#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n ;
    cin >> n ;
    vector <int> arr(n);
    for(int i = 0 ; i < n ; ++i){
        int x;
        cin >> x;
        if(x < 0){
            x *= -1;
        }
        arr[i] = x;
    }
    sort(arr.begin(),arr.end());
    cout << arr[0];
}