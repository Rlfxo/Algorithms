#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    string line;
    uint32_t T, i, len;

    cin >> T;
    getline(cin, line);
    
    for(i=0; i<T; i++){
        getline(cin, line);
        len = line.length();
        cout << line[0] << line[len-1] << '\n';
    }

    return 0;
}