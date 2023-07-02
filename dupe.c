#include <stdio.h>
int main(){
    int a[5]={1,2,3,2,4};
    int ans=0;
    for(int i=0; i<5; i++){
        ans=ans^a[i];
    }
    for(int i=0; i<5; i++){
        ans=ans^i;
    }
    printf("%d",ans);
}