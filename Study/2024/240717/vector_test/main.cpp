#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);
    
    fstream fin("input.txt");
    vector<uint32_t> v;
    vector<uint32_t>::iterator iter;
    uint32_t N, i;
    uint32_t input;

    fin >> N;
    for(i = 0; i < N; i++){
        fin >> input;
        v.push_back(input);
    }

    for(iter = v.begin(); iter != v.end(); iter++){
        printf("%u\n", *iter);
    }

    v.pop_back();
    v.pop_back();

    for(iter = v.begin(); iter != v.end(); iter++){
        printf("iter = %d v.end() = %d\n", *iter, *v.end());
        printf("*");
        printf("%u\n", *iter);
    }

    printf("v.size = %zu\n", v.size());
    printf("v.capacity = %zu\n", v.capacity());

    return 0;
}