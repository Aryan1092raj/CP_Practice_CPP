#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int cnt = 0,cnt_1 =0;
        int n ; cin >> n;
        vector <int> arr(n);
        for(int i  = 0 ; i < n ; ++i){
            cin >> arr[i];
        }
        cnt = count(arr.begin(), arr.end(), 2);
        cnt_1 = count(arr.begin(), arr.end(), 1);
        if(cnt % 2 != 0){
            cout << -1 << endl;
            continue;
        }else if(cnt_1 == n){
            cout << 1 << endl;
            continue;
        }
        // int prod_front = 1, prod_end = 1;
        // for(int i = 0 ; i < n; ++i){
        //     prod_end *= arr[n-i];
        //     prod_front *= arr[i];
        // }
        int targe_cnt = int(cnt / 2);
        int new_check = 0;
        for(int i = 0 ; i < n ; ++i){
            if(arr[i] == 2) new_check++;
            if(targe_cnt == new_check){
                cout  << i+1 << endl;
                break;
            }
        }



    }
}