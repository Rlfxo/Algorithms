/**
 * 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
 * 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
 * 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream input;
    input.open("input.txt", ios::in);

    uint16_t A, B, C;
    uint32_t prize = 0;
    input >> A >> B >> C;

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