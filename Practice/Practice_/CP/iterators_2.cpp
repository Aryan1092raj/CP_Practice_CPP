#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);

    vector <int> v ={2,3,4,6,8};
    for(int &value : v){
        value++;
    }
    for(int value : v){
        cout << value <<" ";
    }
    cout << nl;
}