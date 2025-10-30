#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define nl '\n'

void printVec(vector<int> &v){
    // cout << "size :"<< v.size()<<nl;
    for(int i = 0 ; i < v.size() ; ++i){
        cout << v[i] << " ";
    }   
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cout.tie(nullptr);

    int N; cin >> N;
    vector <vector<int>> v;
    for(int i = 0 ; i < N ; ++i){
        int n; cin >> n;
        //vector <int> temp;
        v.push_back(vector <int> ());
        for(int j = 0 ; j < n ; ++j){
            int x; cin >> x;
            v[i].push_back(x);
            //temp.push_back(x);
        }
        //v.push_back(temp);
    }
    for(int i = 0 ; i < v.size() ; ++i){
        printVec(v[i]);
    }


}