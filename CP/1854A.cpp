#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n , k , x ;
        cin >> n >> k >> x ;
        if(x != 1){
            cout << "YES\n";
            for(int i = 0 ; i < n ; ++i){
                cout << 1 << " ";
            }            
        }else{
            cout << "YES\n";
            if(n % 2 == 0){
                for(int i = 0 ; i < n ; i += 2){
                    cout << 2 << " ";
                }
                cout << endl;
            }else{
                int sum = n ;
                cout << 3 << " ";
                sum -= 3;
                for(int i = 0 ; i < sum ; i += 2){
                    cout << 2 << "\n";
                }
                cout << endl;
            }
        }
    }
}

 