#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

bool map[120][120];

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

    int N, i, x, y;
    cin >> N;

    for(i=0; i<N; i++){
        cin >> x >> y;
        color(x, y);
    }

    cout << result();
    return 0;
}