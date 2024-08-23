#include <iostream>
#include <stdint.h>
#include <map>

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

    cin >> N;
    for(i = 0; i < N; i++)
    {
        cin >> card;
        m[card]++;
    }

    cin >> M;
    for(i = 0; i < M; i++)
    {
        cin >> card;
        cout << m[card] << " ";
    }

    return 0;
}