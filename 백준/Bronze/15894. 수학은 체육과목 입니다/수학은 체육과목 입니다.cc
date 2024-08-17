#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    cin.exceptions(ios::failbit);

    uint32_t n;
    cin >> n;

    cout << n * 4;
    return 0;
}