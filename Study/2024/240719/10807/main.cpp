#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    int32_t N, i;
    int32_t input, target, output = 0;

    vector<int32_t> v;
    vector<int32_t>::iterator iter;

    fin >> N;
    for(i=0; i<N; i++){
        fin >> input;
        v.push_back(input);
    }
    fin >> target;

    for(iter=v.begin(); iter!=v.end(); iter++){
        if(*iter == target){
            output++;
        }
    }
    cout << output;

    return 0;
}