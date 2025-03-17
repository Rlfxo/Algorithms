#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream input("input.txt", ios::in);

    uint32_t X,N,i;
    uint32_t price, count;

    input >> X >> N;
    for(i = 0; i < N; i++){
        input >> price >> count;
        X = X - (price * count);
    }

    if(0 != X){
        cout << "No";
    }else{
        cout << "Yes";
    }

    return 0;
}