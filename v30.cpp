#include <iostream>

using namespace std;

int main() {
    long long n, m, p;
    int c;
    cin >> n;
    m = 0;
    p = 1;
    while (n > 0) {
        c = n % 10;
        if (c > 0) {
            c = c - 1;
        }
        m = m + c * p;
        p = p * 10;
        n = n / 10;
    }
    cout << m;
    return 0;
}
