#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(cin.failbit | cin.badbit);

    uint32_t N, M, i;
    int64_t card;
    map<int64_t, bool> m;

    fstream fin("input.txt", ios::in);
    fin >> N;
    for(i=0; i<N; i++) {
        fin >> card;
        m.insert({card, true});
    }

    fin >> M;
    for(i=0; i<M; i++) {
        fin >> card;
        if(m.find(card) != m.end()) cout << 1 << ' ';
        else cout << 0 << ' ';
    }

    return 0;
}
