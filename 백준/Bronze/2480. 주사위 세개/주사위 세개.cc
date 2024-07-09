#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    uint16_t A, B, C;
    uint32_t prize = 0;
    cin >> A >> B >> C;

    if(A == B && B == C){
        prize = 10000 + A * 1000;
    }else if(A == B || A == C){
        prize = 1000 + A * 100;
    }else if(B == C || B == A){
        prize = 1000 + B * 100;
    }else if(C == A || C == B){
        prize = 1000 + C * 100;
    }else{
        prize = max(A, max(B, C)) * 100;
    }

    cout << prize;
    return 0;
}