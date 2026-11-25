#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int z, x, y;
    cin >> z >> x;
    z = abs(z);
    x = abs(x);
    do {
        y = x;
        x = (x + z / x) / 2;
    } while (x != y);
    cout << x;
    return 0;
}
