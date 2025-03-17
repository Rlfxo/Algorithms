#include <iostream>
#include <stdint.h>
#include <map>
#include <fstream>

using namespace std;

int32_t N, M, i;
int64_t card;

map<int64_t, int32_t> m;

int main(void)
{  
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    fin >> N;
    for(i = 0; i < N; i++)
    {
        fin >> card;
        m[card]++;
    }

    fin >> M;
    for(i = 0; i < M; i++)
    {
        fin >> card;
        cout << m[card] << " ";
    }

    return 0;
}