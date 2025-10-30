#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n ; cin >> n;       
        int x = 1;
        while(n % x == 0){
            x++;
        }
        cout << x - 1 << endl;
    }
}