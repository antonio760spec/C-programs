#include <iostream>

using namespace std;

int main() {
    int n, q, i;
    cin >> n;
    q = 1;
    i = 1;
    while (i < n / i) {
        if (n % i == 0) {
            q = q + i;
        }
        i = i + 3;
    }
    cout << q;
    return 0;
}
