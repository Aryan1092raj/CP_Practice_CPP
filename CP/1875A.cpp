#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a ,b , n;
        cin >> a >> b >> n;
        vector <int> arr(n);
        for(int i = 0 ; i < n ; ++i){
            cin >> arr[i];
        }
        // int c  = b ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; ++i){
            sum += min(arr[i], a - 1);
            // b--;
        }
        cout << sum +b << endl;

    }
}