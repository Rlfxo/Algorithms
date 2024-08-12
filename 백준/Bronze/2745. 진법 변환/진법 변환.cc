#include <iostream>
#include <string>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    string N = "";
    uint32_t result = 0, B, len, b, i;

    cin >> N >> B;
    len = N.length();

    for(char c : N){
        b = 1;
        for(i=0; i<len-1; i++){
            b = b * B;
        }
        len--;

        if('0' <= c && c <= '9'){
            result += (c - '0') * b;
        }else{
            result += (c - 'A' + 10) * b;
        }
    }

    cout << result << endl;
    return 0;
}