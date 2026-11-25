#include <iostream>

using namespace std;

int main() {
    long long n, z;
    int c;
    cin >> n;
    z = 0;
    while (n > 0) {
        c = n % 10;
        n = n / 10;
        if (c < 5) {
            z = z * 10 + 2 * c;
        }
    }
    cout << z;
    return 0;
}
