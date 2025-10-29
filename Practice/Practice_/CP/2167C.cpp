#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    ll t ; cin >> t;
    while(t--){
        ll n ;  cin >> n;
        vector <ll> arr(n);
        bool has_even = false;
        bool has_odd = false;
        for(int i = 0 ; i < n ;++i){
            ll x;cin >> x;
            arr[i] = x;
            if (x % 2 == 0) has_even = true;
            else has_odd = true;

        }
        if(has_even && has_odd){
            sort(arr.begin(),arr.end());
        }
        for(int i = 0 ; i < n ;++i){
            cout << arr[i] <<" ";
        }
        cout << endl;


}
}