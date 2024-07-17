#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    uint32_t N, i, combo, score = 0;
    string line;

    fin >> N;

    for(i=0; i<N; i++){
        combo = 1;
        score = 0;
        getline(fin, line);
        if(line == "") getline(fin, line);

        for(char c : line){
            if(c == 'O'){
                score += combo;
                combo++;
            }else{
                combo = 1;
            }
        }
        printf("%d\n", score);
    }

    return 0;
}