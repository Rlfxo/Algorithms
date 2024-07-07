#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios:: failbit);

    string s;
    getline(cin, s);

    printf("%s??!\n", s.c_str());
    return 0;
}