#include <iostream>
using namespace std;
//You input a sequence of numbers and the program will show the last figure of the greater number (comparing them in consecutive order)
int main() {
    int x;
    cin >> x;
    if (x <= 0) {
        cout << "Invalid input";
        return 0;
    }
    int y;
    while (x>0) {
        cin >> y;
        if (x>y) {
            cout<< x%10;
        } else{
            cout<< y%10;
        }
        x=y;
    }
}
