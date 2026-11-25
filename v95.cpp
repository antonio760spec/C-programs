#include <iostream>

using namespace std;

int main() {
    long long x, n;
    int k;
    x = 0;
    cin >> n >> k;
    while (n != 0) {
        if (n % 10 < k) {
            x = x * 10 + n % 10;
        }
        n = n / 10;
    }
    cout << x;
    return 0;
}
