#include <iostream>

using namespace std;

int main() {
    int n, d, b, v, i, x, a, aux;
    cin >> n >> d;
    b = 0;
    v = 0;
    for (i = 1; i <= n; i++) {
        cin >> x;
        a = 0;
        aux = x;
        while (x % d == 0) {
            a = a + 1;
            x = x / d;
        }
        if (a > b) {
            b = a;
            v = aux;
        }
    }
    cout << v << " " << b;
    return 0;
}
