#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios:: failbit);

    fstream input;
    input.open("input.txt");

    string s;
    getline(input, s);

    printf("%s??!\n", s.c_str());
    return 0;
}