#include <iostream>
using namespace std;
/* This program Tracks consecutive differences in a sequence. 
It prints the last digit of the previous number if the growth exceeds a threshold 'z',
otherwise it prints the last digit of the current number.*/
int main() {
    int x,z,y;
    cin >> z;
    cin >> x;
    if(x <= 0 || z <= 0) {
        cout << "Invalid input";
        return 0;
    }
    while (x>0) {
        cin >> y;
        if (y<0) {
            cout << "Invalid input";
            return 0;

        }
        if (z<y-x){
            cout<<x%10;
        } else {
            cout<<y%10;
        }
        x=y;
    }
}
