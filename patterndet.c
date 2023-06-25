#include<stdio.h>
#define MAXLINE 1000
char pattern[]="ould";
int getl(char str[],int lim){
    int i=0,c;
    while(--lim>0&&(c=getchar()!=EOF)&&c!='\n')
    str[i++]=c;
    if(c=='\n')
    str[i++]=c;
    str[i]='\0';
    return i;
}

int strm(char str[],char pattern[]){
    int i,j,k;
    for(i=0;str[i]!='\0';i++){
        for(j=i,k=0;str[j]==pattern[k]&&pattern[k]!='\0';j++,k++)
        ;
    if(k>0&&pattern[k]=='\0')
        return i;
    }
    return -1;
}

int main(){
    char line[MAXLINE];
    int found=0;
    while (getl(line,MAXLINE)>0)
        if(strm(line,pattern)>=0){
        printf("%s",line);
        found++;
    }
    return found;
}