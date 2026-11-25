#include <iostream>

using namespace std;

int main() {
    int n, m, s;
    cin >> n >> m;
    s = 0;
    while (n < m) {
        s = s + n;
        n = n + 3;
    }
    if (n == m) {
        cout << s + n;
    } else {
        cout << 0;
    }
    return 0;
}
