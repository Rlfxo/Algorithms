#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream input("input.txt", ios::in);
    uint32_t N, i;
    input >> N;
    N = N / 4;

    for(i = 0; i < N; i++)
    {
        printf("long ");
    }
    printf("int");
    return 0;
}