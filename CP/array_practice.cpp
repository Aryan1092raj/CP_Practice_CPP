#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >>t;
	while(t--){
	    int  c ;
	    cin >> c ;
	    vector <int> arr(c);
	    for(int i = 0 ; i < c; ++i){
	        cin >> arr[i];
	    }
	    int count = 1;
	    int min_speed = arr[0];
	    for(int j = 1; j < c  ; ++j){
	        if(arr[j] <= min_speed){
                count++ ;
                min_speed = arr[j]; 
                
            }
        }
	    cout<<count <<endl; 
    }
}