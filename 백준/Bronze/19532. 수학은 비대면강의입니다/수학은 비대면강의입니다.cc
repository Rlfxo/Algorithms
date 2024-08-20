#include <iostream>
#include <stdint.h>

using namespace std;

int main(void){
    int64_t ax, ay, a, bx, by, b, i, j;
    cin >> ax >> ay >> a >> bx >> by >> b;

    for(i=-999; i<=999; i++){
        for(j=-999; j<=999; j++){
            if(ax*i + ay*j == a && bx*i + by*j == b){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    return 0;
}