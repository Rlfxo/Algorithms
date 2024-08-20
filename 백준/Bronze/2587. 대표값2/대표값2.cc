#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int32_t input;
    vector<int32_t> v;
    vector<int32_t>::iterator itr;

    for(int i = 0; i < 5; i++){
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    input = 0;
    for(itr = v.begin(); itr != v.end(); itr++){
        input += *itr;
    }

    cout << (input / 5) << " " << v[2] << endl;

    return 0;
}