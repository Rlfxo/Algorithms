#include<iostream>
#include<string>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    uint32_t N, B;
    string result = "";

    cin >> N >> B;

    while(N > 0){
        uint32_t D = N % B;
        if(D < 10){
            result = to_string(D) + result;
        }else {
            result = (char)(D - 10 + 'A') + result;
        }
        N /= B;
    }

    cout << result << endl;
    return 0;
}