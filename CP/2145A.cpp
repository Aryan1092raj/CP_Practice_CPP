#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int extra = n % 3;
        if(extra == 1 ){
            cout << 2 << endl;
        }else if (extra == 2){
            cout << 1 << endl;
        }else{
            cout << extra << endl;
        }

    }
}