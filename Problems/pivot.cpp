#include <iostream>
using namespace std;

int piv(int arr[], int size){

    int start=0, end=size-1;
    int mid=start+(end-start)/2;
    int pivot;
    while(end>start){
        if(arr[mid]>arr[0]){
            start=mid+1;
        }
        else{
        pivot=mid;
        end=mid;
        }
        mid=start+(end-start)/2;
    }
    return pivot;

}

int main(){

    int arr[10]={7,9,11,1,2,3,4};
    int x=piv(arr,7);
    cout<<"the pivot of the array is: "<<x;

}