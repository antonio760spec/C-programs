#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int s=-1;
    while(n>0){
        if(n%10>s)
            s=n%10;
        else
            s=11;
        n=n/10;
    }
    cout<<s;
    return 0;
}