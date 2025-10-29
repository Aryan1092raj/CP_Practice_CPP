#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    bool check = true;
    while(t--){
        int cnt0 = 0 ;
        int cnt1 = 0;
        string s ; cin >> s;
        for(char  c : s){
            if(c == '0'){
                cnt0++ ;
            }else{
                cnt1++ ;
            }
        }
        int small = min(cnt0,cnt1);
        if(small%2 == 0){
            cout << "NET\n";
        }else{
            cout << "DA\n";
        }
    }
}