#include <iostream>

using namespace std;

int main() {
    int a, b, n, x, y;
    cin >> a >> b;
    n = 0;
    while (a != b) {
        x = a % 10;
        y = b % 10;
        if (x < y) {
            n = n * 10 + x;
        } else {
            n = n * 10 + y;
        }
        a = a / 10;
        b = b / 10;
    }
    cout << n;
    return 0;
}
