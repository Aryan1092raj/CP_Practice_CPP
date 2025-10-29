#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);

    vector <int> v ={2,3,4,6,8};
    vector <int> :: iterator it;
    it = v.begin();
    for(it ; it != v.end(); ++it){
        cout << (*it) <<nl;
    }

}