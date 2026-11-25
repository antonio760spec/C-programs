#include <iostream>

using namespace std;

int main() {
    long long a, p, b;
    int c;
    cin >> a;
    p = 1;
    b = 0;
    while (a != 0) {
        c = a % 10;
        if (a % 2 == 0) {
            b = b + c * p;
        } else {
            b = b * 10 + c;
        }
        a = a / 10;
        p = p * 10;
    }
    cout << b;
    return 0;
}
