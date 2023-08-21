#include<iostream>
using namespace std;

void merge(int a[],int n,int b[],int m,int arr[]){

    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(a[i]>b[j])
            arr[k++]=b[j++];
        else   
            arr[k++]=a[i++];
        }
    while(i<n){
        arr[k++]=a[i++];
    }
    while(j<m){
        arr[k++]=b[i++];
    }
}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};
    int arr[9]={0};
    merge(arr1,5,arr2,5,arr);
    for(int i=0;i<9;i++){
    cout<<arr[i]<<endl;
    }

}