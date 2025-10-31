#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){
    ll r,x,d,n;
    cin >> r >> x >> d >> n;
    string s ;cin >> s;   
    ll L = r;
    ll ans = 0;
    for (char c : s) {
        if (c == '1') { 
            ans++;
            L = max(0LL, L - d);
        } else { 
            if (L >= x){
                continue;
            } 
            ans++;
            L = max(0LL, L - d);
            
        }
    }
    cout << ans << nl;
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll t = 1;cin >> t;
    while(t--){
        solve();
    }
}