#include <bits/stdc++.h>
using namespace std;

string check(int n){
    if(n % 2 == 0){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int cnt = 0;
        for(int  i = 0 ; i < n ; ++i){
            int x;
            cin >> x;
            if(x % 2 == 1){
                cnt++;
            }
        }
        cout << check(cnt) << endl;

    }
}