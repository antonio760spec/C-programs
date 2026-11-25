#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y;
    while (y > 0) {
        z = x % y;
        x = 2 * y;
        y = 2 * z;
    }
    cout << x;
    return 0;
}
