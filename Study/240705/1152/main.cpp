#include <fstream>
#include <iostream>

using namespace std;


int main(){
    fstream input,output;
    input.open("input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    ios::sync_with_stdio(0); cin.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);


    string line;
    int word_count = 0;

    if (getline(cin, line)) {
        bool in_word = false;
        for (char c : line) {
            if (isspace(c)) {
                if (in_word) {
                    word_count++;
                    in_word = false;
                }
            } else {
                in_word = true;
            }
        }
        if (in_word) {
            word_count++;
        }
    }
    cout << word_count << endl;

    return 0;
}