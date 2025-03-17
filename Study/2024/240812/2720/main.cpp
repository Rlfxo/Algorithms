/**
 * Q : 25
 * D : 10
 * N : 5
 * P : 1
 * 1 <= C <= 500
 */
#include <iostream>
#include <fstream> 

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    int T, C;
    int Q, D, N, P;

    fin >> T;
    while(T--) {
        fin >> C;
        Q = C / 25;
        C %= 25;
        D = C / 10;
        C %= 10;
        N = C / 5;
        C %= 5;
        P = C;

        cout << Q << " " << D << " " << N << " " << P << "\n";
    }

    return 0;
}
