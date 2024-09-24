#include <iostream>
#include <stdint.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    uint64_t n, result = 1;
    cin >> n;

    while(n--){
        result *= 2;
    }
    cout << result << '\n';


}
