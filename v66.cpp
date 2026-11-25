#include <iostream>

using namespace std;

int main() {
    int n, x;
    n = 0;
    do {
        cin >> x;
        if (x != 0) {
            if (x % 5 == 0) {
                n = n + 1;
            } else {
                n = n - 1;
            }
        }
    } while (x != 0);
    if (n == 0) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
