#include <iostream>
#include <vector>
#include <deque>
#include <fstream>

using namespace std;

int main(){
    fstream in("input.txt", ios::in);
    int N;
    in >> N;
    deque<pair<int,int>> dq;
    vector<int> v;
    vector<int>::iterator itr;

    for(int i = 0; i < N; i++){
        int temp;
        in >> temp;
        dq.push_back(make_pair(i+1, temp));
    }

    while(!dq.empty()){
        v.push_back(dq.front().first);
        int temp = dq.front().second;
        dq.pop_front();

        if(temp > 0){
            for(int i = 0; i < temp-1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }else{ 
            for(int i = 0; i < -temp; i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    for(itr = v.begin(); itr != v.end(); itr++){
        cout << *itr << " ";
    }

    return 0;
}