#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n ; cin >> n;
    if(n%2 == 1 || n < 4){
        cout << -1 << nl;
        return;
    }
    ll mx =  ll(n/4) , mn = ll((n+5)/6);
    cout << mn << " " << mx <<nl;

}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t = 1;cin >> t;
    while(t--){
        solve();
    }
}