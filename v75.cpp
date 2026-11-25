#include <iostream>

using namespace std;

int main() {
    long long a = 0;
    int k = 0, x;
    do {
        cin >> x;
        while (x > 99) {
            x = x / 10;
        }
        if (x > 9) {
            a = a * 100 + x;
            k = k + 1;
        }
    } while (k != 4);
    cout << a;
    return 0;
}
