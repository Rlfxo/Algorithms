#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    fstream fin("input.txt", ios::in);
    int32_t N, i;
    int32_t x_min = INT32_MAX, x_max = INT32_MIN, y_min = INT32_MAX, y_max = INT32_MIN;

    fin >> N;
    for(i = 0; i < N; i++){
        int32_t x, y;
        fin >> x >> y;
        if(x > x_max) x_max = x;
        if(y > y_max) y_max = y;
        if(x < x_min) x_min = x;
        if(y < y_min) y_min = y;
    }
    int32_t area = (x_max - x_min) * (y_max - y_min);
    cout << area;
    return 0;
}