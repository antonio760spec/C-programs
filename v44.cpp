#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    y = 0;
    while (x > y) {
        y = y * 10 + 9 - x % 10;
    }
    cout << y;
    return 0;
}
