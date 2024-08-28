#include <iostream>
#include <stack>
#include <fstream>

using namespace std;

stack<int> s;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt",ios::in);

    int N, i;
    fin >> N;

    for(i=0; i<N; i++){
        int n;
        fin >> n;
        if(n != 0){
            s.push(n);
        }else if(s.size() != 0){
            s.pop();
        }else{
            continue;
        }
    }

    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }

    cout << sum << '\n';

    return 0;
}