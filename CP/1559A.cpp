#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n ; cin >> n;
        vector <long long> arr(n);
        for(int i = 0 ; i < n ; ++i){
            cin >> arr[i];
        }
        long long check = arr[0];
        for(int i = 1 ; i < n ; ++i){
            check &= arr[i];
        }
        cout << check << '\n';
    }
}