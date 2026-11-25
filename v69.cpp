#include <iostream>

using namespace std;

int main() {
    long long x, y, t, u;
    int z;
    cin >> x >> y;
    t = 0;
    u = 1;
    do {
        if (x % 10 > y % 10) {
            z = x % 10;
        } else {
            z = y % 10;
        }
        t = t + z * u;
        u = u * 10;
        x = x / 10;
        y = y / 10;
    } while (!(x == 0 && y == 0));
    cout << t;
    return 0;
}
