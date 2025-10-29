#include <bits/stdc++.h>
using namespace std ;
int main(){
    int k , n , w ;
    cin >> k >> n >> w ;
    int total = 0;
    for(int i = 1 ; i<=w ; ++i){
        total += i*k;
    }
    cout<<(total - n) <<endl;
}