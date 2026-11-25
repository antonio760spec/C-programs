#include <iostream>

using namespace std;

int main() {
    int n, d, c, i, x;
    cin >> n;
    d = 0;
    c = 0;
    for (i = 1; i <= n; i++) {
        cin >> x;
        while (x % 2 == 0) {
            x = x / 2;
            d = d + 1;
        }
        while (x % 5 == 0) {
            x = x / 5;
            c = c + 1;
        }
    }
    if (c < d) {
        cout << c;
    } else {
        cout << d;
    }
    return 0;
}
