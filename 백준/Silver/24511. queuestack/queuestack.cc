#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main(){
    deque<uint64_t> dq;
    vector<uint64_t> v;
    vector<uint64_t> result;
    vector<uint64_t> :: iterator iter;
    uint64_t N, M, T;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> T;
        v.push_back(T);
    }

    for(int i = 0; i < N; i++){
        cin >> T;
        if(v[i] == 0){
            dq.push_back(T);
        }else{
            continue;
        }
    }

    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> T;
        dq.push_front(T);
        result.push_back(dq.back());
        dq.pop_back();
    }

    for(iter = result.begin(); iter != result.end(); iter++){
        cout << *iter << " ";
    }

    return 0;
}