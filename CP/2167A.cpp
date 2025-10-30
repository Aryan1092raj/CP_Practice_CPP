#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    ll t ; cin >> t;
    while(t--){
        ll a, b, c,d;
        cin >> a >> b >> c >> d;
        if(a == b && b == c && c==d) {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        
    }
}