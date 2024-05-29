#include <iostream>

using namespace std;
uint8_t input[2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);

    cout << "Hello, World!" << "\n";

    cin >> input[0] >> input[1];
    cout << "input[0]: " << input[0] << "\n";
    cout << "input[1]: " << input[1] << "\n";

    return 0;
}