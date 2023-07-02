#include<stdio.h>
int maxlength=1000;
int getline(char str[],int max){
    int c,i=0;
    for(i=0;--max>0&&(c=getchar())!=EOF&&c!='\n';i++)
        str[i]=c;
        i++;
    if(c=='\n')
        str[i++]=c;
    str[i]='\0';
    return i;
}
void rev(char *s){
    int temp,i=0;
    for(i=0;s[i]!=\0;i++){
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
}
