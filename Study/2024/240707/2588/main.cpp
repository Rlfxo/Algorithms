#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    fstream input;
    input.open("input.txt");

    uint32_t a, b;
    input >> a >> b;

    printf("%u\n", a * (b % 10));
    printf("%u\n", a * ((b / 10) % 10));
    printf("%u\n", a * (b / 100));
    printf("%u\n", a * b);

    return 0;
}