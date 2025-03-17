#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);
    uint32_t N, M, i;
    uint32_t ball1, ball2, temp;
    vector<uint32_t> v;
    vector<uint32_t>::iterator itr;

    fin >> N;
    for(i=0; i<N; i++){
        v.push_back(i+1);
    }
    fin >> M;
    for(i=0; i<M; i++){
        fin >> ball1 >> ball2;
        temp = v.at(ball1-1);
        v.at(ball1-1) = v.at(ball2-1);
        v.at(ball2-1) = temp;
    }

    for(itr=v.begin(); itr!=v.end(); itr++){
        cout << *itr << " ";
    }

    return 0;
}