#include <iostream>
using namespace std;

int main() {
    int a,b ;
    cin >> a;
    cin >> b;
    int b2=a;
    if (a<b) {
        a=b;
        b=b2;  
    }
    for (int x=a; x>=b; x--) {
        if(x%2==0){
            cout << x << endl;
        }
    }

}