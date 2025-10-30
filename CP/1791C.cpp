#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s ; cin >> s;
        // len_s = len(s);
        // if((s[0] == 0 && s[len_s - 1] == 1) || (s[0] == 1 || s[len_s - 1] == 0)){
        //    s = s.
        // }else{
        // }
        int ans = n;
        int left = 0 , right = n -1 ;
        while((left <= right)){
            if(s[left] != s[right]){
                ans -= 2;
            }
            else{
                break;
            }
            left ++ ;
            right -- ;
        }
        cout << ans <<'\n';
    }
}