#include <iostream>
using namespace std;

int find_unique(int arr[], int size){
    int unique = 0;
    for(int i=0; i<size; i++){
        unique = unique^arr[i];

    }
    return unique ;
}

int main(){
    int arr[5] = {1,4,3,1,3};
    cout<<find_unique(arr, 5);

    

    return 0;
}