#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void print_set(multiset <string> &s){
    for(auto ele : s) cout << ele << nl; 

}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);
    
    multiset <string> s;
    s.insert("a");
    s.insert("a");
    s.insert("c");
    print_set(s);

}