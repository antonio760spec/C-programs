#include <iostream>

using namespace std;

int main() {
    int x, d;
    cin >> x;
    d = 2;
    cout << x << " ";
    while (x >= d) {
        while (x % d == 0) {
            x = x / d;
            cout << x << " ";
        }
        d = d + 1;
    }
    return 0;
}
