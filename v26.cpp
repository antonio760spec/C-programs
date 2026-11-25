#include <iostream>

using namespace std;

int main() {
    int n, c, i;
    cin >> n;
    c = 0;
    for (i = 1; i <= n; i++) {
        c = (c + 1) % 10;
        cout << c;
    }
    return 0;
}
