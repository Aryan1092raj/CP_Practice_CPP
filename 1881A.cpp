#include <bits/stdc++.h>
using namespace std ;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) {
		int n , m ;
		cin >> n >> m;
		string x , s ;
		cin >> x >> s;
		string check_x = x + x + x + x + x ;
		int inx = check_x.find(s) ;
		cout << inx <<"\n" ;
	}
}