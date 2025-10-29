#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n ; cin >> n ;
        vector <int> arr(n);
        for(int i = 0 ; i < n ; ++i){
            cin >> arr[i];
        }
        long long min_ele = *min_element(arr.begin(),arr.end()) ;
        long long max_ele = *max_element(arr.begin(),arr.end()) ;
        long long diff = (max_ele - min_ele);
        cout <<  diff << "\n";
    }
}