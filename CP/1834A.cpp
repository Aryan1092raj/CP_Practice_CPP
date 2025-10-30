#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n ; cin >> n;
        vector <int> arr(n);
        for(int i = 0 ; i < n ; ++i){
            cin >> arr[i];
        }
        int check = 0;
        int cnt = count(arr.begin(),arr.end() , -1);
        int cnt_1 = count(arr.begin(),arr.end() , 1);
        // if(cnt_1 == 0){
        //     cout << cnt <<endl;
        //     continue;
        // }else if(cnt == cnt_1  || cnt == 0){
        //     cout << 0 <<endl;
        //     continue;
        // }
        // int diff = fabs(cnt_1- cnt);
        // cout << diff <<endl; 
        while(cnt_1 < cnt || cnt % 2 == 1){
            check++;
            cnt_1++;
            cnt--;
        }
        cout << check << '\n';
    }
}