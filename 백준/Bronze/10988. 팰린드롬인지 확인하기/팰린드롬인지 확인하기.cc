#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    string word;
    int len, i;
    bool pass = true;

    getline(cin, word);
    len = word.length();
    for(i = 0; i < len; i++){
        if(word[i] != word[len - i - 1]){
            pass = false;
            break;
        }
    }
    cout << (pass ? 1 : 0);
    

    return 0;
}