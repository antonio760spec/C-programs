#include <iostream>

using namespace std;

int main() {
    long long x, aux;
    int ok1;
    cin >> x;
    aux = x;
    ok1 = 1;
    while (x >= 10) {
        if (x % 10 > (x / 10) % 10) {
            ok1 = 0;
        }
        x = x / 10;
    }
    if (ok1 == 1) {
        cout << aux;
    } else {
        cout << "nu";
    }
    return 0;
}
