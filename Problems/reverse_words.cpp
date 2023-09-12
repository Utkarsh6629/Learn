#include <iostream>
using namespace std;
int main(){

    string str="Hello world";
    int start = 0;
    int end=0;
    int len=str.length();
    cout<<len<<endl;
    for (int i=0;i<=len;i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                swap(str[start], str[end]);
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    cout<<str;
}
// Error