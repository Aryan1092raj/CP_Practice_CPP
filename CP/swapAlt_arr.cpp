#include <iostream>
using namespace std;

void swapAlt(int arr[],int n){
    for(int i=0; i<n; i+=2){
        if(i+2 <= n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){ 
    int arr[6] = {1,4,5,7,6,9};
    swapAlt(arr, 6);
    printArr(arr, 6);



    return 0;
}