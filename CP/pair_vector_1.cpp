#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'

void printVec(vector<pair<int,int>> &v){
    for(int i = 0 ; i < v.size() ; ++i){
        cout << v[i].first << " " << v[i].second<<" ";
        cout << nl;
    }
    
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    
    // pair<int,string> p;
    // p = make_pair(2,"abc");
    // cout << p.first <<" "<<p.second<<nl;
    
    vector<pair<int,int>> v ;
    printVec(v);
    ll n ; cin >> n ;
    for(ll i = 0; i < n ; ++i){
        int x,y ; cin >>x >>y;
        v.push_back({x,y});
    }
    printVec(v);

}