#include <iostream>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    if (n < 0) {
        n = -n;
    }
    i = 1;
    while (i * i <= n) {
        i = i + 1;
    }
    cout << i - 1;
    return 0;
}
