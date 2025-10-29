#include <iostream>
using namespace std;

int sumArr(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Sum of all Elements :"<<sumArr(arr,size);
    return 0;
}