#include <iostream>

using namespace std;

int main() {
    long long a, b, c, d, p;
    cin >> a >> b;
    c = 0;
    d = 0;
    p = 1;
    while (a + b + c > 0) {
        c = a % 10 + b % 10 + c;
        d = d + (c % 10) * p;
        p = p * 10;
        a = a / 10;
        b = b / 10;
        c = c / 10;
    }
    cout << d;
    return 0;
}
