#include <iostream>

using namespace std;

int main(void){
    int N, i, j= 0;
    int star, space;

    cin >> N;

    space = N-1;
    star = 1;
    for(i=0; i<N-1; i++){
        for(j=0; j<space; j++){
            cout << " ";
        }
        for(j=0; j<star; j++){
            cout << "*";
        }
        cout << '\n';
        space --;
        star += 2;
    }

    for(i=0; i<(N-1)*2+1; i++){
        cout << "*";
    }cout << '\n';

    for(i=0; i<N-1; i++){
        space ++;
        star -= 2;
        for(j=0; j<space; j++){
            cout << " ";
        }
        for(j=0; j<star; j++){
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}