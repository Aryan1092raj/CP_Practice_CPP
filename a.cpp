#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        for(int i = 0 ; i < n ; ++i){
            int x;
            cin >> x;
            arr[i] = x%2 ;
        }
        int cnt = 0;
        for(int i = 0 ; i< n ; ++i){
            if(arr[i] == 1){
                cnt++;
            }
        }
        if(cnt % 2 == 0){
            cout << "Draw\n";
        }else{
            cout << "Adnan\n";
        }
    }
}