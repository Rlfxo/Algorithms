#include <iostream>
#include <string>
#include <stack>
#include <fstream>

using namespace std;

stack<char> s;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt",ios::in);

    string str;
    int N;
    fin >> N;
    getline(fin, str);

    for(int i=0; i<N; i++){
        bool fail = false;
        getline(fin, str);
        s = stack<char>();

        for(char c : str){
            if(c == '('){
                s.push(c);
            }else if(c == ')'){
                if(s.empty()){
                    fail = true;
                    break;
                }else{
                    s.pop();
                }
            }
        }

        if(s.empty() && !fail){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}