#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;
    long long pow(long long a, long long b, long long modem = mod){
        a %= mod;
        long long res = 1;
        while (b > 0){
            if (b & 1){
            res = (res * a) % modem;
            a = (a * a) % modem;
            }
            b >>= 1;
        }
        return res;
    }

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    long long n;
    cin >> n;
    
    long long mod_inv = pow(n,mod-2);
    cout << n * mod_inv <<endl;
    
}



// lets say you need to find the modulo inverse of x with mod= 1e9+7 

// so mod_inv(x)=pow(x,mod-2,mod);

// and you are suppose to find lets say your ans is p/q in prob.

// you have to return p*mod_inv(q);


