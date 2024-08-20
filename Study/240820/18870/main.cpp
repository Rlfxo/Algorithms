#include <iostream>
#include <vector>
#include <algorithm>
#include <stdint.h>
#include <fstream>

using namespace std;

int main(void){
    ifstream in("input.txt");

    int64_t n, input, i;
    vector<int64_t> v;
    vector<int64_t> v_sorted;

    in >> n;
    for(i = 0; i < n; i++){
        in >> input;
        v.push_back(input);
    }

    v_sorted = v;
    sort(v_sorted.begin(), v_sorted.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    vector<int64_t>::iterator itr;
    for(i = 0; i < n; i++){
        // cout << lower_bound(v_sorted.begin(), v_sorted.end(), v[i]) - v_sorted.begin() << " ";
        itr = lower_bound(v_sorted.begin(), v_sorted.end(), v[i]);
        cout << itr - v_sorted.begin() << " ";
    }
    return 0;
}

/* 시간 초과
int main(void){
    ifstream in("input.txt");
    
    int64_t n, input, i, count;
    vector<int64_t> result;
    vector<int64_t> v;
    vector<int64_t> v_sorted;
    vector<pair<int64_t, int64_t>> v_level;
    vector<int64_t>::iterator itr = v.begin();

    in >> n;
    for(i = 0; i < n; i++){
        in >> input;
        v.push_back(input);
    }
    v_sorted = v;
    sort(v_sorted.begin(), v_sorted.end());

    count = 0;
    for(itr = v_sorted.begin(); itr != v_sorted.end(); itr++){
        v_level.push_back(make_pair(*itr, count));
        if(*itr != *(itr + 1)){
            count++;
        }else{
            continue;
        }
    }

    for(itr = v.begin(); itr != v.end(); itr++){
        for(i = 0; i < v_level.size(); i++){
            if(*itr == v_level[i].first){
                result.push_back(v_level[i].second);
                break;
            }
        }
    }

    for(itr = result.begin(); itr != result.end(); itr++){
        cout << *itr << " ";
    }
    return 0;
}
*/