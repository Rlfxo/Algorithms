#include <iostream>
#include <functional>
#include <map>
#include <fstream>

using namespace std;

int main(void){
    ifstream in("input.txt");
    
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    map<string, string, greater<string>> m;
    map<string, string>::iterator itr;
    int N, i;

    in >> N;
    for(i=0; i<N; i++){
        string name, status;
        in >> name >> status;
        if(status == "enter") m.insert({name, status});
        else m.erase(name);
    }

    for(itr = m.begin(); itr != m.end(); itr++){
        cout << itr->first << '\n';
    }

    return 0;
}