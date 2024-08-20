#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <fstream>

using namespace std;

int main(void){
    fstream fin("input.txt", ios::in);

    int32_t input, t, n, i;
    vector<int32_t> v;

    fin >> t >> n;
    for(i = 0; i < t; i++){
        fin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end(), greater<int32_t>());
    cout << v[n-1] << endl;
    return 0;
}