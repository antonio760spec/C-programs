#include <iostream>

using namespace std;

int main() {
    int a, b, p, nr, i, x;
    cin >> a >> b >> p;
    nr = 0;
    for (i = a; i <= b; i++) {
        x = i;
        while (x != 0 && x % p != 0) {
            x = x / 10;
        }
        if (x != 0) {
            nr = nr + 1;
        }
    }
    cout << nr;
    return 0;
}
