#include <iostream>

using namespace std;

int main() {
    int a, n, i, j;
    cin >> a >> n;
    j = 3;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            a = a - j;
        } else {
            a = a + j;
        }
        j = 7 - j;
    }
    cout << a;
    return 0;
}
