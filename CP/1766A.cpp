#include <bits/stdc++.h>
using namespace std;
int  find(int n) {
        int count = 0;
 
        if(n<10)
            count = n;
        else {
            while(n>10) {
                count += 9;
                n /= 10;
            }
            count += n;
        }
        return count;
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << find(n) << endl;
    }
}