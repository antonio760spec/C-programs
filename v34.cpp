#include <iostream>

using namespace std;

int main() {
    int x, y, aux;
    cin >> x >> y;
    x = x % 10;
    y = y % 10;
    if (y < x) {
        aux = y;
        y = x;
        x = aux;
    }
    while (x <= y) {
        cout << x * 10 + y << " ";
        x = x + 1;
        y = y - 1;
    }
    return 0;
}
