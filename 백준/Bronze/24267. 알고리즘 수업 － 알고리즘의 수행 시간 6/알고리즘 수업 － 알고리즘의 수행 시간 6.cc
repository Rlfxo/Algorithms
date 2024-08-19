#include <iostream>
#include <stdint.h>

using namespace std;

int main(void){
    uint64_t n,i,j,k,code = 0;
    cin >> n;
    cout <<(n * (n - 1) * (n - 2)) / 6 << endl; // 조합 수식 C(n, 3) = n! / (3!(n-3)!)
    cout << 3 << endl;
    return 0;
}