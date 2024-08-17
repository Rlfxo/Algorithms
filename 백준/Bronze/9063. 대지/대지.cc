#include <iostream>

using namespace std;

int main(void){
    int32_t N, i;
    int32_t x_min = INT32_MAX, x_max = INT32_MIN, y_min = INT32_MAX, y_max = INT32_MIN;

    cin >> N;
    for(i = 0; i < N; i++){
        int32_t x, y;
        cin >> x >> y;
        if(x > x_max) x_max = x;
        if(y > y_max) y_max = y;
        if(x < x_min) x_min = x;
        if(y < y_min) y_min = y;
    }
    int32_t area = (x_max - x_min) * (y_max - y_min);
    cout << area;
    return 0;
}