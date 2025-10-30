#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    ll cnt = 0 ;
    ll t ; cin >> t; 
    while(t--){
        ll arr[3];
        for(int i = 0 ;i < 3 ; ++i){
            cin >> arr[i];
        }
        if(count(arr,arr + 3,1) > count(arr,arr+3,0)){
            cnt++;
        }
    }
    cout << cnt << nl;
}