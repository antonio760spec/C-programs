#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n - 1; i++) {
        if (i % 2 == 0) {
            cout << '#';
        }
        for (j = i + 1; j <= n; j++) {
            cout << '*';
        }
    }
    return 0;
}
