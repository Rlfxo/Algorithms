#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    fstream fin("input.txt",ios::in);
    
    vector<uint32_t> v;
    vector<uint32_t>::iterator iter;

    uint32_t N, M, i, j;

    fin >> N;
    for(i=0; i<N; i++){
        v.push_back(0);
    }

    fin >> M;
    for(i=0; i<M; i++){
        uint32_t x,y,z;
        fin >> x >> y >> z;

        for(j=x-1; j<y; j++){
            v.at(j) = z;
        }
    }

    for(iter=v.begin(); iter!=v.end(); iter++){
        cout << *iter << " ";
    }

    return 0;
}