#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;

bool map[110][110];

void color(int x, int y){
    int i, j = 0;
    for(i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            map[x+i][y+j] = 1;
        }
    }
}

int result(void){
    int i, j, sum = 0;
    for(i = 0; i < 100; i++){
        for(j = 0; j < 100; j++){
            if(map[i][j] == 1) sum++;
        }
    }
    return sum;
}

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    memset(map, false, sizeof(map));
    
    fstream fin("input.txt", ios::in);

    int N, i, x, y;
    fin >> N;

    for(i=0; i<N; i++){
        fin >> x >> y;
        color(x, y);
    }

    cout << result();
    return 0;
}