#include <iostream>
#include <map>
#include <stdint.h>

#include <fstream>

using namespace std;

int32_t N, M, i;
int64_t num;
map<int64_t, bool> m;

int main(void){ 
    ifstream in("input.txt");

    in >> N >> M;
    for (i = 0; i < N; i++){
        in >> num;
        m[num] = true;
    }
    for (i = 0; i < M; i++){
        in >> num;
        if(m[num]){
            m.erase(num);
        }else{
            m[num] = true;
        }
    }
    cout << m.size() << '\n';
    return 0;
}