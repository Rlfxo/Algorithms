#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL); 
    cin.exceptions(ios::failbit | ios::badbit);

    uint32_t N, i, j, result = 0;
    cin >> N;

    vector<uint32_t> v;
    for(i = 0; i < N; i++){
        cin >> j;
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