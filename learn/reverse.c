#include <stdio.h>
int main(){
    int a[4]={1,2,3,4};
    int temp;
    int size=sizeof(a)/sizeof(int);
    for(int i=0;i<=size/2;i++){
        temp=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=temp;
        i++;
    }
    for(int i=0;i<size;i++)
    printf("%d",a[i]);
}