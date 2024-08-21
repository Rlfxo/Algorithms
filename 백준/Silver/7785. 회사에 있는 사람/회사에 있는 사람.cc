#include <iostream>
#include <functional>
#include <map>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    map<string, string, greater<string>> m;
    map<string, string>::iterator itr;
    int N, i;

    cin >> N;
    for(i=0; i<N; i++){
        string name, status;
        cin >> name >> status;
        if(status == "enter") m.insert({name, status});
        else m.erase(name);
    }

    for(itr = m.begin(); itr != m.end(); itr++){
        cout << itr->first << '\n';
    }

    return 0;
}