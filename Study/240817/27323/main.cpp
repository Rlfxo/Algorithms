#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    cin.exceptions(ios::failbit);

    fstream fin("input.txt", ios::in);
    uint32_t n;
    fin >> n;

    cout << n * 4;
    return 0;
}