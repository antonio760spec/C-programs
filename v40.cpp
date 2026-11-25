#include <iostream>

using namespace std;

int main() {
    int x, d, y, z, p;
    cin >> x;
    d = 2;
    y = 0;
    z = 0;
    while (x != 1) {
        p = 0;
        while (x % d == 0) {
            p = p + 1;
            x = x / d;
        }
        if (p != 0) {
            if (y == 0) {
                y = d;
            }
            z = d;
        }
        d = d + 1;
    }
    cout << y << endl;
    cout << z;
    return 0;
}
