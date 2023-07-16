#include <stdio.h>
int main(){
    int a[7]={1,2,3,1,2,3,4};
    int odd=0;
    for(int i=0;i<7;i++){
        odd=odd^a[i];
    }
    printf("%d",odd);
}