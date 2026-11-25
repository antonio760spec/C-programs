#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    while (n <= m) {
        n = n + 1;
        m = m - 1;
    }
    while (m < n) {
        m = m + 1;
        n = n - 1;
    }
    cout << n;
    return 0;
}
