#include <iostream>
#include <cstdio>

using namespace std;

uint8_t N = 0;
uint8_t M = 0;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> N;

    for(int i=0; i<N-1; i++) {
        cin >> M;
        cout << M << endl;
    }
    return 0;
}