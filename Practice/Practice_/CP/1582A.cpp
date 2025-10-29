#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n ; cin >> n;
        // vector <int> arr(n);
        int cnt_0 = 0 , cnt_1 = 0;
        for(int i = 0 ; i < n ; ++i){
            int x ; cin >> x;
            if(x == 0){
                cnt_0 ++;
            }else if(x == 1){
                cnt_1 ++;
            }
        }
        long long subsq = pow(2, cnt_0) * cnt_1;
        cout << subsq <<'\n';
        
    }
}