#include <iostream>

using namespace std;

int main() {
    long long x, z, p;
    int c;
    cin >> x;
    z = 0;
    p = 1;
    do {
        c = x % 10;
        if (c % 2 != 0) {
            z = z + c * p;
            p = p * 10;
        }
        x = x / 10;
    } while (x != 0);
    cout << z;
    return 0;
}
