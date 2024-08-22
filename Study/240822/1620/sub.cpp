#include <iostream>
#include <string>
#include <map>
using namespace std;

int N, M;
string input;
map<string, int> m;
string name[100001];

/**
 * 
 * endl을 사용하면 시간 초과
 * 
 */

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        cin >> input;
        m.insert({input, i});
        name[i] = input;
    }
    for(int i = 1; i <= M; i++){
        cin >> input;
        if(isdigit(input[0])){
			cout << name[stoi(input)] << '\n';
        }
        else{
            cout << m.find(input)->second << '\n';
        }
    }
    return 0;
}