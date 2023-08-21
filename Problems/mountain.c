#include <stdio.h>
int pos(int a[],int size){
    int mid;
    int s=0;
    int e=size-1;
    mid=(s+e)/2;
    while(s<e){
        if(a[mid]<a[mid+1])
            s=mid+1;
        else    
            e=mid;
        mid=(s+e)/2;
    }
    return s;
}
 
int main(){
    int a[5]={1,4,3,2,1};
    int i=pos(a,5);
    printf("peak is at: %d",i);
}