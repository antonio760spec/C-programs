#include <iostream>

using namespace std;

int main() {
    long long s = 0, x;
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x;
        while (x > 9) {
            x = x / 10;
        }
        for (j = 1; j <= i - 1; j++) {
            x = x * 10;
        }
        s = s + x;
    }
    cout << s;
    return 0;
}
