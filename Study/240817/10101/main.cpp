#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    fstream fin("input.txt", ios::in);
    int a, b, c;
    fin >> a >> b >> c;
    
    if((a+b+c) != 180){
        cout << "Error";
    }else if(a == b && b == c){
        cout << "Equilateral";
    }else if(a == b || b == c || c == a){
        cout << "Isosceles";
    }else {
        cout << "Scalene";
    }
    return 0;
}