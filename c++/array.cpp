#include <iostream>
using namespace std;

int getMax(int num[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        // if(num[i]>max){
        // max = num[i];
        maxi = max(maxi,num[i]);        
    }
    return maxi;
}


int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0;  i<size; i++){
        cin >> num[i];
    
    }

    cout<<"Maximum : "<<getMax(num, size)<<endl;
    return 0;
}