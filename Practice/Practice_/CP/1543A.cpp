#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll t , a , b ;

// int gcd(int a, int b) {
//     if (b == 0) {
//         return a;
//     }
//     return gcd(b, a % b);
// }

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin >> t;
    while(t--){
        cin >> a >> b;
        ll c = abs(a-b);
        ll moves = min(b%c, c - b%c);
        if(c == 0){
            cout << c <<' '<< 0 << '\n';
        }else{
            cout << c <<' '<< moves <<'\n';
        }
    

    }
}