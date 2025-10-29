#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 4;
    int  *p_x = &x ;
    cout<< p_x <<endl;
    cout << &x << endl;
    int **p_p_x = &p_x ;
    cout << **p_p_x;

}