#include <iostream>
#include <stdint.h>
#include <algorithm>

using namespace std;

int32_t N, M, i;
int64_t card;
int64_t arr[500002];


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
        arr[i] = card;
    }

    sort(arr, arr + N);

    cin >> M;
    for(i = 0; i < M; i++)
    {
        cin >> card;
        cout << upper_bound(arr, arr + N, card) - lower_bound(arr, arr + N, card) << '\n';
    }

    return 0;
}