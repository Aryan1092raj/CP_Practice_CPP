#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'

void print_map(map<int,string> &m){
    for(auto &pr : m){
        cout<<pr.first<<" " << pr.second<<nl;
    }    
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    
    map <int,string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"afg"});
    m.erase(3);
    print_map(m);
    auto it = m.find(5);
    // cout << (*it).second ;
    m.erase(it);
    print_map(m);
}