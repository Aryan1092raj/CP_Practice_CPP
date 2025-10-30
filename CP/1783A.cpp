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
        for(int i = 0 ; i<n ; ++i){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        // auto max_it = ;
        // auto min_it = ;
        int max_ele = *max_element(arr.begin(),arr.end());
        int min_ele = *min_element(arr.begin(),arr.end());
        sort(arr.begin(),arr.end());
        if(min_ele == max_ele){
            cout << "NO\n";
        }else{
            cout << "YES\n";
            cout << max_ele << " ";
            for(int i = 0 ; i < n-1 ; ++i){
                cout << arr[i] << " ";
            }
            cout << endl;
            
        }
    }
}