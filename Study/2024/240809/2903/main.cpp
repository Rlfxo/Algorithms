#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    ifstream fin("input.txt", ios::in);

    int n, i;
    int result = 2;
    fin >> n;
    
    for(i=0; i<n; i++){
        int plus = (result - 1);
        result += plus;
    }

    cout << result * result;

    return 0;
}