#include <bits/stdc++.h>
using namespace std;

bool check_a(vector <int> &arr,int n){
    bool check_2 = false;
    for(int i = 0 ; i < n ; ++i){
        for(int j = i+1 ; j < n ; ++j){
            if(__gcd(arr[j],arr[i]) <= 2){
                return true ;    
                }
        }
        if(check_2){
            break;
        }
    }
    return check_2;

}


int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n ; cin >> n;
        vector <int> arr(n);
        for(int i = 0 ; i < n ; ++i){
            cin >> arr[i];
        }
        bool check = check_a(arr,n);
        if(check){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }     
    }
}
