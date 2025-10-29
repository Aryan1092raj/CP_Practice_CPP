#include <iostream>
using namespace std;

int duplicateArr(int arr[], int n){
    int duplicate = 0;
    for(int i =0 ; i<n; i++){
        duplicate = duplicate^arr[i]^i; 
    }
    for(int i=1; i<n; i++){
        duplicate=duplicate^i;
    }
    return duplicate;
}

int main(){
    int arr[5] = {4,2,3,1,4};
    cout<<duplicateArr(arr ,5);
    return 0;
}