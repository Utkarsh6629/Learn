#include <stdio.h>
int search(int a[],int size,int item){
    int mid,start,end;
    start=0;
    end=size-1;
    mid=(start+end)/2;
    while(start<=end){
        if(a[mid]==item)
            return mid;
        if(a[mid]>item)
            end=mid-1;
        else
            start=mid+1;
        mid=(start+end)/2;             
    }
    return -1;
}

int main(){
    int a[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i;
    i=search(a,15,2);
    printf("location of 2 is %d",i);
}