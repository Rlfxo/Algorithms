#include <iostream>

using namespace std;

int main(void){
    int n, i;
    int result = 2;
    cin >> n;
    
    for(i=0; i<n; i++){
        int plus = (result - 1);
        result += plus;
    }

    cout << result * result;

    return 0;
}