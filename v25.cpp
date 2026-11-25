#include <iostream>

using namespace std;

int main() {
    int a, b, c, t;
    cin >> a >> b >> c;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    while (a <= b) {
        if (a % c == 0) {
            cout << a << " ";
        }
        a = a + 1;
    }
    return 0;
}
