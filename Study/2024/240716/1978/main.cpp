#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL); 
    cin.exceptions(ios::failbit | ios::badbit);

    fstream input("input.txt", ios::in);

    uint32_t N, i, j, result = 0;
    input >> N;

    vector<uint32_t> v;
    for(i = 0; i < N; i++){
        input >> j;
        v.push_back(j);
    }
    result = N;

    for(i = 0; i < N; i++){
        if(v[i] == 1){
            result--;
            continue;
        }
        for(j = 2; j < v[i]; j++){
            if(v[i] % j == 0){
                result--;
                break;
            }
        }
    }
    printf("%d", result);

    return 0;
}