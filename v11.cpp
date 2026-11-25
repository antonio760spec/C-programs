#include <iostream>

using namespace std;

int main() {
    long long n, k, p;
    int c;
    cin >> n >> k;
    p = 1;
    while (n > 0 && k > 0) {
        c = n % 10;
        if (c % 2 == 1) {
            p = p * c;
        }
        n = n / 10;
        k = k - 1;
    }
    cout << p;
    return 0;
}
