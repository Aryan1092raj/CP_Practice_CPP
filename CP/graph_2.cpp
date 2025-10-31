/*
given n strings,print unique string
in lexographical order with thier 
frequency
N<=10^5
|S| <= 100
*/ 

#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void solve(map<string,int> &m){
    string s;cin >>s;
    m[s] += 1;
}
void print(map<string,int> &m){
    for(auto it : m){
        cout << it.first<<" "<<it.second<<nl;
    }
}


int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
        
    map<string,int> m;
    int t = 1;cin >> t;
    while(t--){
        solve(m);
    }
    print(m);
}