#include <iostream>
#include <deque>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    fstream in("input.txt", ios::in);
    
    deque<uint64_t> dq;
    vector<uint64_t> v;
    vector<uint64_t> result;
    vector<uint64_t> :: iterator iter;
    uint64_t N, M, T;

    in >> N;
    for(uint64_t i = 0; i < N; i++){
        in >> T;
        v.push_back(T);
    }

    for(uint64_t i = 0; i < N; i++){
        in >> T;
        if(v[i] == 0){
            dq.push_back(T);
        }else{
            continue;
        }
    }

    in >> M;
    for(uint64_t i = 0; i < M; i++){
        in >> T;
        dq.push_front(T);
        result.push_back(dq.back());
        dq.pop_back();
    }

    for(iter = result.begin(); iter != result.end(); iter++){
        cout << *iter << " ";
    }

    return 0;
}