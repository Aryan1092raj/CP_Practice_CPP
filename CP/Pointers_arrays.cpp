#include <bits/stdc++.h>
using namespace std ;

void increment(int *x){
    (*x)++ ;
}

int main(){
    // int a[10];
    // a[0] = 2 ;
    // a[1] = 4 ;
    // cout<< "a :" << a <<endl;
    int a = 4;
    cout << a <<endl;
    increment(&a);
    cout << a << endl;
}