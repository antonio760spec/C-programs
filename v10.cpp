#include <iostream>

using namespace std;

int main() {
    long long n, nr, p;
    int k;
    cin >> n >> k;
    nr = 0;
    p = 1;
    while (n != 0 && k != 0) {
        if (n % 2 != 0) {
            nr = nr + (n / 10) % 10 * p;
            p = p * 10;
        } else {
            k = k - 1;
        }
        n = n / 10;
    }
    cout << nr;
    return 0;
}
