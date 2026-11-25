#include <iostream>

using namespace std;

int main() {
    int a, b, k, t, p;
    cin >> a >> b >> k;
    t = a;
    p = 0;
    while (t <= b) {
        if (k == t % 10) {
            cout << t << " ";
            p = 1;
        }
        t = t + 1;
    }
    if (p == 0) {
        cout << -1;
    }
    return 0;
}
