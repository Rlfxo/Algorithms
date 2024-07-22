#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    uint32_t N, M, i;
    uint32_t ball1, ball2, temp;
    vector<uint32_t> v;
    vector<uint32_t>::iterator itr;

    cin >> N;
    for(i=0; i<N; i++){
        v.push_back(i+1);
    }
    cin >> M;
    for(i=0; i<M; i++){
        cin >> ball1 >> ball2;
        temp = v.at(ball1-1);
        v.at(ball1-1) = v.at(ball2-1);
        v.at(ball2-1) = temp;
    }

    for(itr=v.begin(); itr!=v.end(); itr++){
        cout << *itr << " ";
    }

    return 0;
}