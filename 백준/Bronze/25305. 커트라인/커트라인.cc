#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void){
    int32_t input, t, n, i;
    vector<int32_t> v;

    cin >> t >> n;
    for(i = 0; i < t; i++){
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end(), greater<int32_t>());
    cout << v[n-1] << endl;
    return 0;
}