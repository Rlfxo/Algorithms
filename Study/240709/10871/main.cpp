#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    fstream input;
    input.open("input.txt", ios::in);

    uint16_t N, K, a;
    input >> N >> K;

    for(uint16_t i = 0; i < N; i++){
        input >> a;
        if(a < K){
            cout << a << " ";
        }
    }

    return 0;
}