#include <iostream>

using namespace std;

int main() {
    long long x, y;
    cin >> x;
    y = 0;
    while (x != 0) {
        while (x > 9) {
            x = x / 10;
        }
        y = y * 10 + x;
        cin >> x;
    }
    cout << y;
    return 0;
}
