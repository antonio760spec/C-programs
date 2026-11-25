#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    int y;
    cin >> x;
    y = floor(x);
    x = x - y;
    while (x != floor(x)) {
        x = x * 10;
    }
    if (x == y) {
        cout << 1;
    } else {
        cout << 2;
    }
    return 0;
}
