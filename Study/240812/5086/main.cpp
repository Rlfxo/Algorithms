#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    int A, B;
    while (true)
    {
        fin >> A >> B;
        if (A == 0 && B == 0) break;

        if(A % B == 0){
            cout << "multiple" << endl;
        }else if(B % A == 0){
            cout << "factor" << endl;
        }else {
            cout << "neither" << endl;
        }
    }

    return 0;
}