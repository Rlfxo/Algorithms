#include <iostream>

using namespace std;

int main(void){
    
    while(true){
        int max = 0;
        int a, b, c;
        cin >> a;
        if(a > max) max = a;
        cin >> b;
        if(b > max) max = b;
        cin >> c;
        if(c > max) max = c;

        if(max == 0){
            break;
        }
        if(max >= (a + b + c - max)){
            cout << "Invalid" << endl;
        }else if(a == b && b == c){
            cout << "Equilateral" << endl;
        }else if(a == b || b == c || a == c){
            cout << "Isosceles" << endl;
        }else {
            cout << "Scalene" << endl;
        }

    }

    return 0;
}