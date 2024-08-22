#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(cin.failbit | cin.badbit);

    ifstream fin("input.txt");

    int N, M, i;
    unordered_map<string, int> um;
    
    fin >> N >> M;

    for(i = 1; i <= N; i++){
        string name;
        fin >> name;
        um[name] = i;
    }

    for (i = 0; i < M; i++)
    {
        string input;
        fin >> input;
        if(um[input] != 0){
            cout << um[input] << '\n';
        }
        else{
            for(auto it = um.begin(); it != um.end(); it++){
                if(it->second == stoi(input)){
                    cout << it->first << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}