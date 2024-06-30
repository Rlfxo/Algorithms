#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int times;
int num1, num2;

int main()
{
    ifstream infile;
    infile.open("input.txt");

    infile >> times;

    for(int i = 0; i < times; i++)
    {
        infile >> num1 >> num2;
        cout << num1 << " + " << num2 << " = ";
        cout << num1 + num2 << endl;
    }

    cout << endl;
}