#include <iostream>
using namespace std;

int isPal(char a[],int size){
    int s,e;
    s=0;
    e=size-1;
    while(s<e){
        if(a[s++]!=a[e--])
            return 0;
    }
    return 1;
}

int size(char a[]){
    int size=0;
    for(int i=0;a[i]!='\0';i++){
        size++;
    }
    return size;
}

int main(){
    char a[5];
    cout<<"enter a string: "<<endl;
    cin>>a;
    cout<<"Size of string is "<<size(a)<<endl;
    if (isPal(a,size(a)))
    cout<<"the string is a palindrome"<<endl;
    else
    cout<<"the string is not a palindrome";

}