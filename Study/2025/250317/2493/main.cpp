#include <iostream>
#include <fstream>

using namespace std;

int N;
int L[1000001];

void solve() {
}

int main() {
    fstream input;
    input.open("input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input >> N;
    cout << "N: " << N << endl;
    for (int i = 0; i < N; i++) {
        input >> L[i];
    }
    cout << "L: ";
    for (int i = 0; i < N; i++) {
        cout << L[i] << " ";
    }
    cout << endl;

    solve();

    return 0;
}