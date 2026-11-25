#include <iostream>

using namespace std;

int main() {
    int x, p, i;
    cin >> x;
    if (x < 0) {
        x = -x;
    }
    p = 1;
    for (i = 1; i <= x; i++) {
        p = (p * 4) % 10;
    }
    cout << p;
    return 0;
}
