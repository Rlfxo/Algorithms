/**
 * A (0 ≤ A ≤ 23)
 * B (0 ≤ B ≤ 59)
 * C (0 ≤ C ≤ 1,000)
 */
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream input;
    input.open("input.txt", ios::in);

    uint16_t H, M, C;

    input >> H >> M;
    input >> C;

    M += C;
    H += M / 60;
    M %= 60;
    H %= 24;

    cout << H << " " << M;

    return 0;
}
