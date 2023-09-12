#include <iostream>
using namespace std;

bool bina(int arr[],int key,int s,int e){
    if(e<s)
    return false;
    int mid=s+(e-s)/2;
    if(key==arr[mid])
        return true;
    if(key>arr[mid])
        bina(arr,key,mid+1,e);
    else
        bina(arr,key,s,mid-1);
}

int main(){
    int arr[5]={1,3,5,7,9};
    if(bina(arr,7,0,4)){
        cout<<"the element is present";
    }
    else
        cout<<"The element is absent";
}