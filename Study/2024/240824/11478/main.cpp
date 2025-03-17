#include <iostream>
#include <string>
#include <set>

#include <fstream>

using namespace std;

int main() {
    string s;
    // cin >> s;

    fstream fin("input.txt", ios::in);
    fin >> s;

    set<string> sub;

    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j <= s.size(); j++) {
            sub.insert(s.substr(i, j - i));
        }
    }

    cout << sub.size();

    return 0;
}