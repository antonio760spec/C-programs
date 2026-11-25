#include <iostream>

using namespace std;

int main() {
    long long x, z;
    int c;
    cin >> x;
    z = 0;
    do {
        c = x % 10;
        if (c % 2 != 0) {
            z = z * 10 + c - 1;
        } else {
            z = z * 10 + c;
        }
        x = x / 10;
    } while (x != 0);
    cout << z;
    return 0;
}
