#include <iostream>

using namespace std;

int main() {
    int n, k, i, j;
    cin >> n;
    k = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << i + j << " ";
            k = k + 1;
        }
    }
    cout << k;
    return 0;
}
