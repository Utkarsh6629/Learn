#include<stdio.h>
int maxlength=1000;
int getline(char str[],int max){
    int c,i=0;
    for(i=0;--max>0&&(c=getchar())!=EOF&&c!='\n';i++)
        str[i]=c;
        i++;
    if(c=='\n')
        str[i++]=c;
    str[i]='\0'
}
