#include <iostream>

using namespace std;

int main() {
    long long n, q;
    cin >> n;
    q = 1;
    while (n > 0) {
        if (n % 5 == 0) {
            q = q * 10;
        } else {
            q = q * 10 + 1;
        }
        n = n / 5;
    }
    cout << q;
    return 0;
}
