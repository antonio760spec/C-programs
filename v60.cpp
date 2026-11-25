#include <iostream>

using namespace std;

int main() {
    int n, c;
    cin >> n;
    c = 10;
    while (n % 2 == 1) {
        c = n % 10;
        n = n / 10;
    }
    cout << c;
    return 0;
}
