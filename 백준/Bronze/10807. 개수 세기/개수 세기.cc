#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    int32_t N, i;
    int32_t input, target, output = 0;

    vector<int32_t> v;
    vector<int32_t>::iterator iter;

    cin >> N;
    for(i=0; i<N; i++){
        cin >> input;
        v.push_back(input);
    }
    cin >> target;

    for(iter=v.begin(); iter!=v.end(); iter++){
        if(*iter == target){
            output++;
        }
    }
    cout << output;

    return 0;
}