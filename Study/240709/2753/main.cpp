//윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.
#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream input;
    input.open("input.txt", ios::in);

    uint16_t year;
    input >> year;

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}