#include <stdio.h>
int ri(int a[],int size,int key){
    int start,end,mid;
    start=0; 
    end=size-1;
    mid=(start+end)/2;
    //to find right
   while(start<=end){
        if(a[mid]==key){
            while(a[mid]==key){
            mid=mid+1;}
            return mid-1;
   }
        if(a[mid]>key)
            end=mid-1;
        else
            start=mid+1;
        mid=(start+end)/2;             
    }
    return -1;
}

int le(int a[],int size,int key){
    int start,end,mid;
    start=0; 
    end=size-1;
    mid=(start+end)/2;
    //to find left
   while(start<=end){
        if(a[mid]==key){
            while(a[mid]==key){
            mid=mid-1;}
            return mid-1;
   }
        if(a[mid]>key)
            end=mid-1;
        else
            start=mid+1;
        mid=(start+end)/2;             
    }
    return -1;
}

int main(){
    int a[10]={0,0,1,2,3,3,3,4,5,5};
    int left,right;
    left=le(a,10,3);
    right=ri(a,10,3);
    printf("left most occurance of 3 is: %d\n",left);
    printf("right most occurance of 3 is: %d",right);

}