#include <iostream>

using namespace std;

int main() {
    int a, k, b;
    cin >> a;
    k = 0;
    b = ((a + 1) * (a + 2)) / 2;
    while (b >= a) {
        b = b - a;
        k = k + 1;
    }
    cout << b << " " << k;
    return 0;
}
