#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >> s;
        string easy = "...";
        if(s.find(easy) != string::npos){
            cout << 2 << endl;
        }else{
            cout << count(s.begin(),s.end(),'.') << endl ;
        }
    }
}