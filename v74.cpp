#include <iostream>

using namespace std;

int main() {
    long long a, b, c, p;
    cin >> a >> b;
    c = 0;
    p = 0;
    while (a + b > 0) {
        if (a % 10 == b % 10 && a % 2 == 0) {
            c = c * 10 + b % 10;
        } else {
            p = p * 10 + a % 10;
        }
        a = a / 10;
        b = b / 10;
    }
    cout << c << " " << p;
    return 0;
}
