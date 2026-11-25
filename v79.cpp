#include <iostream>

using namespace std;

int main() {
    int a, x, k, c;
    cin >> a;
    x = 2;
    k = 0;
    while (a > 1) {
        c = 0;
        while (a % x == 0) {
            c = x;
            a = a / x;
        }
        if (c != 0) {
            k = k + x;
        }
        x = x + 1;
    }
    cout << k;
    return 0;
}
