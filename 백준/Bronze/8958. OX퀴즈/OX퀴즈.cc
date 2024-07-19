#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    uint32_t N, i, combo, score = 0;
    string line;

    cin >> N;

    for(i=0; i<N; i++){
        combo = 1;
        score = 0;
        getline(cin, line);
        if(line == "") getline(cin, line);

        for(char c : line){
            if(c == 'O'){
                score += combo;
                combo++;
            }else{
                combo = 1;
            }
        }
        cout << score << '\n';
    }

    return 0;
}