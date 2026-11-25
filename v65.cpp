#include <iostream>

using namespace std;

int main() {
    long long n, v;
    int m, u, c;
    cin >> n;
    m = 0;
    v = n;
    u = n % 10;
    do {
        c = n % 10;
        v = v * 10 + c;
        if (c == u) {
            m = m + 1;
        }
        n = n / 10;
    } while (n != 0);
    cout << v << " " << m;
    return 0;
}
