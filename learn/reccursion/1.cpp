#include <iostream>
using namespace std;

int power(int n){

    if(n==1)
        return 2;
    int ans;
    ans=2*power(n-1);
    return ans;

}
int main(){
    int n,ans;
    cin>>n;
    ans=power(n);
    cout<<ans;
}