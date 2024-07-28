#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    fstream fin ("input.txt", ios::in);

    string line;
    uint32_t T, i, len;

    fin >> T;
    getline(fin, line);
    
    for(i=0; i<T; i++){
        getline(fin, line);
        len = line.length();
        cout << line[0] << line[len-1] << '\n';
    }

    return 0;
}