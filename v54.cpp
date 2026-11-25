#include <iostream>

using namespace std;

int main() {
    long long n, s, p;
    int c, i;
    cin >> n;
    s = 0;
    while (n > 0) {
        c = n % 10;
        if (c % 2 == 0) {
            p = 1;
            for (i = 2; i <= c; i++) {
                p = p * i;
            }
            s = s + p;
        }
        n = n / 10;
    }
    cout << s;
    return 0;
}
