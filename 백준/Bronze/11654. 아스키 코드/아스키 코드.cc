#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    char c;
    cin >> c;
    cout << static_cast<int>(c) << endl;

    return 0;
}

