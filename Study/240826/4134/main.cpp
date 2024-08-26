#include <iostream>
#include <fstream>

using namespace std;

int64_t solve(int64_t x){
    int64_t i = 0;
    while (true) {  
        for(i = 2; i <= x; i++){
            if(x % i == 0) break;
        }
        if(i == x) return x;
        x++;
    }
}

int main() {
    fstream fin("input.txt", ios::in);

    int n;
    fin >> n;

    for (int i = 0; i < n; i++) {
        int64_t x;
        fin >> x;

        x = solve(x);

        cout << x << '\n';
    }

    return 0;
}