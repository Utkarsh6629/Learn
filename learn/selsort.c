#include<stdio.h>
int main(){
    int a[5]={5,4,3,2,1};
    int minIndex,temp;
    for(int i=0;i<5;i++){
        minIndex=i;
        for(int j=i+1;j<5;j++){
            if(a[j]<a[minIndex])
            minIndex=j;
        }
        temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
}