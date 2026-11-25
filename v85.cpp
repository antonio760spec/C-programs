#include <iostream>

using namespace std;

int main() {
    long long n;
    int ok, c, ok1;
    cin >> n;
    ok = 0;
    while (n > 0) {
        c = n % 10;
        if (c % 2 == 1) {
            ok1 = 1;
        } else {
            ok1 = 0;
        }
        if (ok1 == 1) {
            cout << c << " ";
            ok = 1;
        }
        n = n / 10;
    }
    if (ok == 0) {
        cout << "nu";
    }
    return 0;
}
