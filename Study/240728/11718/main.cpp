#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void){
    fstream fin("input.txt", ios::in);

    string line;
	while(getline(fin, line)) {
		if(line == "") break;
		cout << line << '\n';
	}

    return 0;
}


