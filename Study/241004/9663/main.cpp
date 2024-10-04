#include <iostream>

#define MAX 14

using namespace std;

int location[MAX];
int result = 0;
int T;

void nqueen(int row) {
    if (row == T) {
        result++;
        return;
    }

    for (int i = 0; i < T; i++) {
        location[row] = i;
        bool flag = true;
        for (int j = 0; j < row; j++) {
            if (location[row] == location[j] || row - j == abs(location[row] - location[j])) {
                flag = false;
                break;
            }
        }
        if (flag) {
            nqueen(row + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    nqueen(0);

    cout << result << "\n";
    return 0;
}