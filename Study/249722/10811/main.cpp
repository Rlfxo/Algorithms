#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    uint32_t N, M, i;
    vector<uint32_t> v;
    vector<uint32_t>::iterator itr;

    fin >> N;
    for(i = 0; i < N; i++){
        v.push_back(i+1);
    }

    fin >> M;
    for(i = 0; i < M; i++){
        uint32_t a, b, temp;
        fin >> a >> b;
        reverse(v.begin() + a - 1, v.begin() + b);
    }

    for(itr = v.begin(); itr != v.end(); itr++){
        cout << *itr << " ";
    }

    return 0;
}