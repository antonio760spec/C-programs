#include <iostream>

using namespace std;

int main() {
    int i, j, x, s;
    for (i = 1; i <= 3; i++) {
        cin >> x;
        s = 0;
        for (j = 1; j <= i; j++) {
            s = s + x % 10;
        }
        cout << s << " ";
    }
    return 0;
}
