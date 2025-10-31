#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){
    ll a , b , c; cin >> a >> b >> c;

    // ll sm = a + c;
    // if(sm % b == 0 ||( a==b && b==c)){
    //     cout << "YES" << nl;
    // }else{
    //     cout << "NO" << nl;
    // }

    int nw_a = 2*b -c ;
    if(nw_a >= a && nw_a % a == 0 && nw_a !=0){
        cout << "YES"<<nl;
        return;
    }
    int nw_b = (a+c)/2 ;
    if(nw_b >= b && (c-a)%2 == 0 && nw_b % b == 0 && nw_b !=0){
        cout << "YES"<<nl;
        return;
    } int nw_c = 2*b -a ;
    if(nw_c >= c && nw_c % c == 0 && nw_c !=0){
        cout << "YES"<<nl;
        return;
    } 
    cout << "NO" << nl;
    return;
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