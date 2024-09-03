#include <iostream>
#include <string>
#include <stack>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cin.exceptions(ios::failbit);

    fstream fin("input.txt", ios::in);

    string str;

    while(1){
        stack<char> s;
        bool ret = true;

        getline(fin, str);
        if(str == ".")  break;

        for(char c : str){
            if(c == '(' || c == '['){
                s.push(c);
            }else if(c == ')' || c == ']'){
                if(s.empty()){
                    ret = false;
                    continue;
                }
                if(s.top() == '(' && c == ')'){
                    s.pop();
                }else if(s.top() == '[' && c == ']'){
                    s.pop();
                }else{
                    ret = false;
                    continue;
                }
            }
        }

        if(ret && s.empty()){
            cout << "yes" << endl;
        }else {
            cout << "no" << endl;
        }

    }

    return 0;
}