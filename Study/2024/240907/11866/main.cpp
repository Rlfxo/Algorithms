#include <iostream>
#include <queue>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    fstream in("input.txt", ios::in);
    int N, K;
    in >> N >> K;

    queue<int> q;
    vector<int> v;
    vector<int>::iterator itr;

    for(int i = 1; i <= N; i++){
        q.push(i);
    }

    while(true){
        if(q.size() == 0) break;

        for(int i = 0; i < K - 1; i++){
            int front = q.front();
            q.pop();
            q.push(front);
        }

        v.push_back(q.front());
        q.pop();
    }

    cout << "<";
    for(itr = v.begin(); itr != v.end(); itr++){
        cout << *itr;
        if(itr != v.end() - 1) cout << ", ";
    }
    cout << ">" << endl;


    return 0;
}