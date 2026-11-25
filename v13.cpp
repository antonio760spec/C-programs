#include <iostream>

using namespace std;

int main() {
    long long a, b, i, n;
    int k, c;
    cin >> a >> b;
    k = 0;
    for (i = a; i <= b; i++) {
        n = i;
        c = 0;
        while (n > 0) {
            if (n % 2 == 1) {
                c = c + 1;
            }
            n = n / 10;
        }
        if (c > 0) {
            k = k + 1;
        }
    }
    cout << k;
    return 0;
}
