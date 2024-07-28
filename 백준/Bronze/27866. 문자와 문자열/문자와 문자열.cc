#include <iostream>
#include <string>

using namespace std;

int main(void){

    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    string line;
    uint16_t idx;

    getline(cin, line);
    cin >> idx;

    cout << line[idx-1];

    return 0;
}