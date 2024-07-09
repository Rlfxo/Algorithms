#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    uint16_t H, M, C;

    cin >> H >> M;
    cin >> C;

    M += C;
    H += M / 60;
    M %= 60;
    H %= 24;

    cout << H << " " << M;

    return 0;
}
