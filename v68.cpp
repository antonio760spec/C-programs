#include <iostream>

using namespace std;

int main() {
    int x, nr, i, n;
    cin >> x;
    nr = 0;
    for (i = 1; i <= x; i++) {
        cin >> n;
        if (n % x == 0) {
            nr = nr + 1;
        }
    }
    cout << nr;
    return 0;
}
