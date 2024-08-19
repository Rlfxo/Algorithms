#include <iostream>
#include <stdint.h>

using namespace std;

int main(void){
    int64_t n, i, j, code = 0;
    cin >> n;

    for(i=1; i<=n-1; i++){
        for(j=i+1; j<=n; j++){
            code++;
        }
    }

    cout << code << endl;
    cout << 2 << endl;

    return 0;
}