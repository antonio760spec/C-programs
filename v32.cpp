#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;
    if (a > b) {
        c = b;
        b = a;
        a = c;
    }
    while (a <= b) {
        cout << a << " ";
        a = a * 2;
    }
    cout << a;
    return 0;
}
