#include <iostream>

using namespace std;

int main() {
    int n, i, x, nr;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x;
        nr = 0;
        while (x > 0) {
            nr = nr * 100 + x % 10;
            x = x / 100;
        }
        while (nr > 0) {
            x = x * 10 + nr % 10;
            nr = nr / 10;
        }
        cout << x << " ";
    }
    return 0;
}
