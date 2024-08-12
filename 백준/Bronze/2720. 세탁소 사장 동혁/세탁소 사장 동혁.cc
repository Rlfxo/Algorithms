#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    int T, C;
    int Q, D, N, P;

    cin >> T;
    while(T--) {
        cin >> C;
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
