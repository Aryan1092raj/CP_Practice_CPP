#include <bits/stdc++.h>
using namespace std;

// int median(long long arr(),int n){
//         int c = arr[(n-1)/2];
//         return  c;
// }


int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n , k ;
        cin >> n >> k;
        vector <long long> arr(n*k);
        for(int i = 0 ; i < n*k ; ++i){
            cin >> arr[i];
        }
        // sort(arr.begin(),arr.end());
        long long s = 0;
        int step =k - (k+1)/2 + 1;
        long long idx = n*k - step;
        for(int i = 0; i < n; ++i) {
            s += arr[idx];
            idx -= step;
        }
        cout << s << '\n';
    }
}