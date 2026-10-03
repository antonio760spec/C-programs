#include <iostream>
using namespace std;
//The program will execute for all figures divisbile by 3 of n-number by converting the figures in 9-them and put it in z-number that will be shown.
int main() {
    int n;
    cout<<"Enter number n";
    cin>>n;
    int z=0;
    int p=1;
    while (n>0) {
        int c=n%10;
        n=n/10;
        if (c%3==0) {
            z=z+p*(9-c);
            p=p*10;
        }
        
    }
    cout<<z;
}
