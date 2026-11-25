#include <iostream>

using namespace std;

int main() {
    long long n, t, r;
    cin >> n;
    t = n;
    r = 0;
    while (t > 0) {
        if ((t % 10) % 2 == 1) {
            r = r * 10 + 1;
        } else {
            r = r * 10 + t % 10;
        }
        t = t / 10;
    }
    n = 0;
    while (r > 0) {
        n = n * 10 + r % 10;
        r = r / 10;
    }
    cout << n;
    return 0;
}
