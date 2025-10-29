#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n; 
    cin >> n;
    vector<long long> arr(n);
    for(long long i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    long long sum = 0;
    if(arr[n-1] > 0) sum += arr[n-1]; 
    if(n > 1 && arr[n-2] > 0) sum += arr[n-2];
    cout << sum << '\n';
}
