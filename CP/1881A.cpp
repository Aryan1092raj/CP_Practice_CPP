#include <bits/stdc++.h>
using namespace std ;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n , m ;
		cin >> n >> m;
		string x , s ;
		cin >> x >> s;
		string check_x = x  ;
		int op = 1;
		if(s.find(check_x) != string::npos){
			cout << 0 <<'\n';
			continue;
		}
		while(op<5){
			check_x += x;
			if(s.find(check_x) != string::npos){
			cout << op <<'\n';
			break;
			}else if(op == 5){
				cout << -1 <<'\n';
			}
			op++;
		}
	}
}