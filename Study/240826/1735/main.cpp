#include <iostream>
#include <stdint.h>
#include <fstream>

using namespace std;

int main() {
    fstream fin("input.txt", ios::in);

    int64_t a, b, c, d;
    int64_t x, y, i;
    fin >> a >> b >> c >> d;

    x = (a * d) + (b * c);
    y = b * d;
    i = y;

    while (i > 1) {
        if (y % i == 0 && x % i == 0) {
            y /= i;
            x /= i;
        }
        i--;
    }

    cout << x << " " << y;
    return 0;
}