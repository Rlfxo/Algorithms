#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    fstream input;
    input.open("input.txt");

    char c;
    input >> c;
    cout << static_cast<int>(c) << endl;

    return 0;
}

