#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    uint32_t N, B;
    string result = "";

    fin >> N >> B;

    while(N > 0){
        uint32_t D = N % B;
        if(D < 10){
            result = result + to_string(D);
            // cout << D << " "; 
        }else {
            result = result + (char)(D - 10 + 'A');
            // cout << (char)(D - 10 + 'A') << " ";
        }
        N /= B;
    }

    cout << result << endl;
    return 0;
}