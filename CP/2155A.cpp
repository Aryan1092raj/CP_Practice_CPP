#include <bits/stdc++.h>
using namespace std;

// const int n = 500;
// int hsh[n];

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    // for(int i = 0 ; i <= 500 ; ++i){
    //     hsh[i] = i;
    // }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 2){
            cout << 2 <<endl;
        }else{
            cout << 2*(n-1) << endl;
        }
    }
}