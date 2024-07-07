#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    uint32_t a, b;
    cin >> a >> b;

    printf("%u\n", a * (b % 10));
    printf("%u\n", a * ((b / 10) % 10));
    printf("%u\n", a * (b / 100));
    printf("%u\n", a * b);

    return 0;
}