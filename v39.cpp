#include <iostream>

using namespace std;

int main() {
    long long n, nr, p;
    int c;
    cin >> n;
    nr = 0;
    p = 1;
    while (n != 0) {
        c = n % 10;
        if (c > 0 && c < 9) {
            c = c + 1;
        }
        nr = nr + c * p;
        p = p * 10;
        n = n / 10;
    }
    cout << nr;
    return 0;
}
