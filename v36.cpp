#include <iostream>

using namespace std;

int main() {
    int s, v, a, b;
    s = 0;
    cin >> v;
    while (v != 0) {
        a = v % 10;
        b = (v / 10) % 10;
        s = s + a * 10 + b;
        cin >> v;
    }
    cout << s;
    return 0;
}
