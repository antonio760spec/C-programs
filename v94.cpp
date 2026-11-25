#include <iostream>

using namespace std;

int main() {
    long long n, n1, n2, k1, p, i, x;
    cin >> n;
    n1 = 0;
    n2 = 0;
    k1 = 0;
    while (n != 0) {
        if ((n % 10) % 2 == 0) {
            n2 = n2 * 10 + n % 10;
        } else {
            n1 = n1 * 10 + n % 10;
            k1 = k1 + 1;
        }
        n = n / 10;
    }
    p = 1;
    for (i = 1; i <= k1; i++) {
        p = p * 10;
    }
    x = n2 * p + n1;
    cout << x;
    return 0;
}
