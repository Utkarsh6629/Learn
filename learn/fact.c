#include<stdio.h>
int fact(int n){
    if(n==1) return 1;
    if(n==0) return 1;
    else
    return n*fact(n-1);
}
int main(){
    int n,facto;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n<0) {
    printf("enter a valid number");
    return 0;
    }
    facto=fact(n);
    printf("the factorial of %d is %d",n,facto);
}