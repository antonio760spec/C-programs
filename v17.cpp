#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x < y) {
        x = x - y;
        y = x + y;
        x = y - x;
    }
    while (x >= y) {
        cout << 'A';
        x = x - y;
        cout << 'B';
    }
    return 0;
}
