#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int x , y , z; 
        cin >> x >> y >> z;
        if(x%2 == 0 && y%2 == 0 && z%2 == 0){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }

    }
}