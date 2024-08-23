#include <iostream>
#include <stdint.h>
#include <algorithm>
#include <fstream>

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

    fstream fin("input.txt", ios::in);

    fin >> N;
    for(i = 0; i < N; i++)
    {
        fin >> card;
        arr[i] = card;
    }

    sort(arr, arr + N);

    fin >> M;
    for(i = 0; i < M; i++)
    {
        fin >> card;
        cout << upper_bound(arr, arr + N, card) << " " << lower_bound(arr, arr + N, card) << endl;
        cout << upper_bound(arr, arr + N, card) - lower_bound(arr, arr + N, card) << endl;
    }

    return 0;
}