#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    bool man[30] = {false, };

    for(int i = 0; i < 28; i++){
        int temp;
        cin >> temp;
        man[temp-1] = true;
    }

    for(int i = 0; i < 30; i++){
        if(man[i] == false){
            cout << i+1 << "\n";
        }
    }

    return 0;
}