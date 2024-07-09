#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    uint16_t year;
    cin >> year;

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}