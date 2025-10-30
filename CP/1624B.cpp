#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a , b , c ;
        cin >> a >> b >> c ;
        
        int new_a = b - (c-b);
        if(new_a >= a && new_a % a == 0 && new_a != 0){
            cout << "YES\n";
        }
        int new_b =

    }
}