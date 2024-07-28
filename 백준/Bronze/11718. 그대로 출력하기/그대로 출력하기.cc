#include <iostream>
#include <string>

using namespace std;

int main(void){

    string line;

	while(true) {
		getline(cin, line);
		if(line == "") break;
		cout << line << '\n';
	}


    return 0;
}


