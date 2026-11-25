#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a;
    do {
        b = 0;
        while (a != 0) {
            b = b + a % 10;
            a = a / 10;
        }
        a = b;
    } while (a >= 10);
    cout << b;
    return 0;
}
