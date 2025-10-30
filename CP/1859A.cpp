#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n ; cin >> n ;
        vector <int> a(n);
        vector <int> b;
        vector <int> c;
        for(int i = 0 ; i < n ; ++i){
            cin >> a[i];
        }
        int max_ele = *max_element(a.begin(),a.end());
        for(int i = 0 ; i < n ; ++i){
            if(a[i] != max_ele){
                b.push_back(a[i]);
            }else{
                c.push_back(a[i]);
            }
        }
        if(b.size() == 0){
            cout << -1 << '\n';
        }else{
            cout << b.size() << " " << c.size() << '\n';
        for(auto i : b){
            cout << i << " ";
        }
        cout << '\n';
        for(auto i : c){
            cout << i << " ";
        }
        cout << '\n';
        

        }
    }
}