#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    uint32_t N, i;
    cin >> N;
    N = N / 4;

    for(i = 0; i < N; i++)
    {
        printf("long ");
    }
    printf("int");
    return 0;
}