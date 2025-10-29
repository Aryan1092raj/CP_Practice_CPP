#include <iostream>
using namespace std;

void updateArr(int arr[],int n){
    cout<<endl<<"inside the function ";

    arr[0]=5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    int arr[3]= {1,2,3};

    updateArr(arr, 3);
    cout<<endl<<"outside the function ";
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}