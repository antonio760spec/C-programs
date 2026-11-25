#include <iostream>

using namespace std;

int main() {
    int n, k, i;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        if (i / k == 0) {
            cout << i;
            k = k - 1;
        } else {
            cout << i % k;
        }
    }
    return 0;
}
