#include <iostream>
using namespace std;

void swapArr(int arr[], int size){
    int start = 0;
    int end = size-1;  
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[],int size){
     for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[5]={-2,1,2,5,4};
    cout<<"before swap"<<endl;
    printArr(arr, 5);
    swapArr(arr, 5);
    cout<<endl<<"After swap"<<endl;
    printArr(arr, 5);
    

    return 0;
}