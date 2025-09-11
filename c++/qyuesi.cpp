#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=0 ; i<n ;i++){
        if(arr[i] >= arr[i+1]){
            continue;
        }else{
            arr.sort();
        }
    }

}

int main(){
    return 0;
}