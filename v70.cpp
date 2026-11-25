#include <iostream>

using namespace std;

int main() {
    int x, y, n, aux;
    cin >> x >> y;
    if (x < y) {
        aux = x;
        x = y;
        y = aux;
    }
    n = 0;
    while (x >= y) {
        x = x - y;
        n = n + 1;
    }
    cout << n << " " << x;
    return 0;
}
