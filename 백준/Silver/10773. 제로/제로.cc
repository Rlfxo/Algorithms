#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    int N, i;
    cin >> N;

    for(i=0; i<N; i++){
        int n;
        cin >> n;
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