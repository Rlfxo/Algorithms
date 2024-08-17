#include <iostream> 
#include <fstream>

using namespace std;

int main(void){
    fstream fin("input.txt", ios::in);
    int a, b, c, wild;
    int max = 0;
    fin >> a >> b >> c;

    if(a > max) max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    wild = a + b + c - max;

    if(wild <= max){
        cout << ((wild * 2) - 1) << endl;
    }else{
        cout << a + b + c << endl;
    }



    return 0;
}