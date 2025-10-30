#include <bits/stdc++.h>
using namespace std;

bool check(long long n){
    if(n % 2 == 0){
        return false;
    }else{
        return true;
    }
}


int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        bool istrue = true ;
        for(long long i = 2 ; i <= int(n/2) ; ++i){
            if(n == 2){
                istrue = false;
                break;
            }else if(n % i == 0){
                istrue = check(i);
                continue;
            }
        }
        if(istrue){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}