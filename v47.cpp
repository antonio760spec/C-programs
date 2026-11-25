#include <iostream>

using namespace std;

int main() {
    int n, max_val;
    cin >> n;
    max_val = 0;
    do {
        n = n / 10;
        if (max_val < n % 10) {
            max_val = n % 10;
        }
    } while (n != 0);
    cout << max_val;
    return 0;
}
