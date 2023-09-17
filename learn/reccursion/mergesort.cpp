#include <iostream>
using namespace std;

mergeSort(int* arr,int s, int e){
    mid=s+(e-s)/2;
    //to sort left half
    mergeSort(arr,0,mid);
}

int main(){
    int arr[10]={9,7,8,6,5,4,3,2,1,0};
    mergeSort(arr,0,9);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}