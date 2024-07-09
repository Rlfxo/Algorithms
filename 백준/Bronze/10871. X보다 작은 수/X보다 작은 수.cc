#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    uint16_t N, K, a;
    cin >> N >> K;

    for(uint16_t i = 0; i < N; i++){
        cin >> a;
        if(a < K){
            cout << a << " ";
        }
    }

    return 0;
}