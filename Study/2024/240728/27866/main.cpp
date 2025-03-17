#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void){

    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    fstream fin("input.txt", ios::in);

    string line;
    uint16_t idx;

    getline(fin, line);
    fin >> idx;

    cout << line[idx-1];

    return 0;
}