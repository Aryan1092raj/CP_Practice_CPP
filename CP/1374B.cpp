#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n ; cin >> n ;
        int cnt = 0 ;
        while(true){
            if(n % 6 == 0){
                n /= 6 ;
                cnt++;
            }else if(n % 3 == 0){
                n *= 2;
                cnt++;
            }else{
                break;
            }
        }
        if(n == 1){
            cout << cnt << endl;
        }else{
            cout << -1 << endl;
        }

    }
}