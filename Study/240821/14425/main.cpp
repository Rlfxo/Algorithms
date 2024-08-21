#include <iostream>
#include <string>
#include <map>

#include <fstream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(cin.failbit | cin.badbit);

    fstream fin("input.txt", ios::in);

    uint32_t N, M, i, result = 0;
    string card;
    map<string, bool> m;

    fin >> N >> M;
    for(i=0; i<N; i++) {
        fin >> card;
        m.insert({card, true});
    }

    for(i=0; i<M; i++) {
        fin >> card;
        if(m.find(card) != m.end()) result++;
    }
    
    cout << result;

    return 0;
}
