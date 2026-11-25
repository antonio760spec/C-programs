#include <iostream>

using namespace std;

int main() {
    int n, a, b, k, i;
    cin >> n >> a;
    k = 0;
    for (i = 2; i <= n; i++) {
        cin >> b;
        if (a % 10 == b % 10) {
            k = k + 1;
        } else {
            k = k - 1;
        }
        a = b;
    }
    cout << k;
    return 0;
}
