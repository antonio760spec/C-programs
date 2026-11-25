#include <iostream>

using namespace std;

int main() {
    int n, k, i, x, c;
    cin >> n;
    k = 9;
    for (i = 1; i <= n; i++) {
        cin >> x;
        c = (x / 10) % 10;
        if (c < k) {
            k = c;
        }
    }
    cout << k;
    return 0;
}
