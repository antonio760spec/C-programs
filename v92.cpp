#include <iostream>

using namespace std;

int main() {
    int n, nr, i;
    double y, x;
    cin >> n;
    nr = 0;
    y = 0;
    for (i = 1; i <= n; i++) {
        do {
            cin >> x;
            nr = nr + 1;
        } while (!(x >= 1 && x <= 10));
        y = y + x;
    }
    cout << (int)(y / n) << " " << nr;
    return 0;
}
