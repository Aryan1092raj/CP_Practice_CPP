#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n;
    int sum = 0 ,rem = 0;
    while( n != 0 ){
        rem = n%10 ;
        sum += rem ;
        n = n/10 ;
    }    

    cout<<sum;
    return 0;
}