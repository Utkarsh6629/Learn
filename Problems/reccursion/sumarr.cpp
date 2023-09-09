#include <iostream>
using namespace std;

int sumof(int arr[],int size){
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];
    return arr[size-1]+sumof(arr,size-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int sum=sumof(arr,size);
    cout<<sum;
}