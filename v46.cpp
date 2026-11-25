#include <iostream>

using namespace std;

int main() {
    int n, s, nr;
    cin >> n;
    s = 0;
    nr = 0;
    while (n != 0) {
        if (n % 2 == 0) {
            s = s * 10 + n % 10;
        }
        n = n / 10;
    }
    if (s != 0) {
        nr = 1;
    }
    cout << nr;
    return 0;
}
