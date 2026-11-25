#include <iostream>

using namespace std;

int main() {
    int n, nr, m;
    int a;
    cin >> n;
    nr = 0;
    for (a = 9; a >= 0; a--) {
        m = n;
        while (m != 0 && m % 10 != a) {
            m = m / 10;
        }
        if (m != 0) {
            nr = nr * 10 + m % 10;
        }
    }
    cout << nr;
    return 0;
}
