#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;
int DP[1001][1001];

int bino_dp(int n, int k){
    for (int i = 0; i <= 1000; i++){
        for (int ii = 0; ii <= 1000; ii++){
            if (i == ii || ii == 0) DP[i][ii] = 1;
            else DP[i][ii] = (DP[i - 1][ii - 1] + DP[i - 1][ii]) % MOD;
        }
    }
    return DP[n][k];
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    cout << bino_dp(n, k);
}
