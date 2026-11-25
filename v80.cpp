#include <iostream>

using namespace std;

int main() {
    int a, b, p, c;
    cin >> a;
    b = 0;
    p = 1;
    while (a > 0) {
        c = a % 10;
        if (c % 2 != 0) {
            b = b + p * c;
            p = p * 10;
        }
        a = a / 10;
    }
    cout << b;
    return 0;
}
