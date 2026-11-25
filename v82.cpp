#include <iostream>

using namespace std;

int main() {
    int m, n, i, x, aux, ok;
    cin >> m >> n;
    for (i = 1; i <= n; i++) {
        cin >> x;
        aux = x;
        ok = 0;
        while (x > 0) {
            if (x % 10 == m) {
                ok = 1;
            }
            x = x / 10;
        }
        if (ok == 1) {
            cout << aux << " ";
        }
    }
    return 0;
}
