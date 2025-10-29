#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    ll t ; cin >> t;
    while(t--){
        int n ; cin >> n;
        string s ,t;
        cin >> s >>t;
        bool found = true;
        if(s.length() != t.length()){
            cout << "NO\n";
            continue;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s == t){
            cout <<"YES\n";
        }else{
            cout <<"NO\n";
        }

        
    }
}