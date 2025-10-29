#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        if(n - k < 2){
            cout << "NO\n";
        }else{
            cout << "YES\n";
            for(int  i = 0 ; i < n ; ++i){
                for(int j = 0 ; j < n ; ++j){
                    cout << 'U' ;
                }
                cout<<'\n'<<endl;
            }
        }

    }
}