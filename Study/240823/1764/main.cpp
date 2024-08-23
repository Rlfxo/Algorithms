#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <stdint.h>

#include <fstream>

using namespace std;

int32_t N, M, i;
string name;
set<string> s;
vector<string> v;

int main() {
    ifstream in("input.txt");

    in >> N >> M;
    for (i = 0; i < N; i++) {
        in >> name;
        s.insert(name);
    }
    for (i = 0; i < M; i++) {
        in >> name;
        if (s.find(name) != s.end()) {
            v.push_back(name);
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }
}