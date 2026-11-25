#include <iostream>

using namespace std;

int main() {
    int x, y, z, t;
    cin >> x >> y;
    z = 1;
    t = 0;
    while (x >= z) {
        if (x % z == y) {
            t = z;
        }
        z = z + 1;
    }
    cout << t;
    return 0;
}
