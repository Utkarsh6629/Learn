#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,4,3,1 };
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size&&arr[i]!=0;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j])
            printf("%d ",arr[i]);
        }
    }
}