#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(all(arr));
    int cnt1 = upper_bound(all(arr), arr[0]) - arr.begin();
    int cnt2 = n - cnt1;
    if(cnt2 == 0){
        cout << "Yes\n"; return;
    }
    if(abs(cnt1 - cnt2) <= 1){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t = 1; cin >> t;
    while(t--){
        solve();
    }
}
