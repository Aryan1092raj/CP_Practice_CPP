#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector <int> arr(n);
        int differnce = 1e9 ;
        bool sorted_1 = true ;
        for(int i = 0 ; i < n ; ++i){
            cin >> arr[i];
            if(i > 0){
                differnce = min(arr[i] - arr[i-1],differnce);
                sorted_1 &= arr[i] >= arr[i - 1];
            }
        }
        if(!sorted_1){
            cout << 0 << endl;
        }else{
            cout << (differnce/2) + 1 << endl;
        }
    }  
}