#include <iostream>

using namespace std;

int main() {
    int x, s, f, p;
    cin >> x;
    s = 0;
    f = 2;
    while (x > 1) {
        p = 0;
        while (x % f == 0) {
            x = x / f;
            p = p + 1;
        }
        s = s + p;
        f = f + 1;
    }
    cout << s;
    return 0;
}
