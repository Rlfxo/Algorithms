#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#define LINE_NUM (5)
#define WORD_MAX (15)

using namespace std;

vector<vector<char>> vv;
vector<char> v;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::badbit | ios::failbit);

    fstream fin("input.txt", ios::in);
    int buffer, i, j;
    string line;

    for(i=0; i<LINE_NUM; i++){
        getline(fin, line);

        for(char c : line){
            v.push_back(c);
        }
        vv.push_back(v);
        v.clear();
    }

    for(i=0; i<WORD_MAX; i++){
        for(j=0; j<LINE_NUM; j++){
            try {
                cout << vv[j].at(i);
            }
            catch (out_of_range& e){
                continue;
            }
        }
    }
    return 0;
}