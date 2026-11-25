#include <iostream>

using namespace std;

int main() {
    long long n, r;
    cin >> n;
    r = 0;
    do {
        r = (r * 10 + n % 10) * 10;
        n = n / 100;
    } while (!(n < 10));
    cout << r;
    return 0;
}
