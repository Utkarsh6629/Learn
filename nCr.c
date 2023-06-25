#include <stdio.h>
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int nCr(int a,int b){
    int num,den;
    num=fact(a);
    den=fact(b)*fact(a-b);
    return (num/den);
}
void main(){
    int a,b;
    printf("Enter the 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("the nCr of the give numbers is %d",nCr(a,b));
}