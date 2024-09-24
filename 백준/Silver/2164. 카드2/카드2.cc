#include <iostream>
#include <queue>

using namespace std;

int main(){
    int N;
    cin >> N;
    queue<int> q;

    for(int i = 1; i <= N; i++){
        q.push(i);
    }

    while(true){
        int down = 0;
        if(q.size() == 1) break;
        q.pop();

        down = q.front();
        q.pop();
        q.push(down);
    }

    cout << q.front() << endl;

    return 0;
}
