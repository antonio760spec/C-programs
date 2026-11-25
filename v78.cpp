#include <iostream>

using namespace std;

int main() {
    int a, b, k = 0;
    cin >> a;
    while (a != 0) {
        cin >> b;
        if (a % 10 == b % 10) {
            k = k + 1;
        }
        a = b;
    }
    cout << k;
    return 0;
}
