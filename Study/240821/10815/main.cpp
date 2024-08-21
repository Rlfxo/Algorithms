#include <iostream>
#include <vector>
#include <algorithm>
#include <stdint.h>

#include <fstream>

using namespace std;

/**
 * 시간 초과
 */
int main(void){
    fstream fin("input.txt", ios::in);

    uint64_t N, M, i;
    vector<int64_t> v;

    fin >> N;
    for(i = 0; i < N; i++){
        int64_t card;
        fin >> card;
        v.push_back(card);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    fin >> M;
    for(i = 0; i < M; i++){
        int64_t card;
        fin >> card;
        if(find(v.begin(), v.end(), card) != v.end()){
            cout << 1 << " ";
        }else{
            cout << 0 << " ";
        }
    }

    return 0;
}