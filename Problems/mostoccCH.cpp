#include <iostream>
using namespace std;
int main(){

    int arr[26]={0};
    string s="happy";
    int index;
    for(int i=0;i<s.length();i++){
        index=s[i]-'a';
        arr[index]++;
    }
    int max=-1;
    int maxindex=-1;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
        max=arr[i];
        maxindex=i;
        }
    }
    char f='a'+ maxindex;
    cout<<"the most occuring letter in the word is: "<<f;


}