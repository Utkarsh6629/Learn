#include <iostream>
using namespace std;

void mergeS(int a[],int s1, int b[], int s2,int c[]){
    int i=0,j=0,k=0;
    while(i<s1 && j <s2){
        if(a[i]>b[j])
            c[k++]=b[j++];
        else  
            c[k++]=a[i++];
    }
    while(i<s1){
        c[k++]=a[i++];
    }
    while(j<s2){
        c[k++]=b[j++];
    }
}


int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};
    int arr[9];
    mergeS(arr1,5,arr2,4,arr);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}