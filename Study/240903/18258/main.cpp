#include <iostream>
#include <string>
#include <queue>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cin.exceptions(ios::failbit);

    fstream fin("input.txt", ios::in);

    int n;
    string str;
    fin >> n;

    queue<int> q;

    for(int i = 0; i < n+1; i++){
        getline(fin, str);

        if(str == "pop"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
                q.pop();
            }
        }else if(str == "size"){
            cout << q.size() << '\n';
        }else if(str == "empty"){
            cout << q.empty() << '\n';
        }else if(str == "front"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
            }
        }else if(str == "back"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.back() << '\n';
            }
        }else{ // push
            int num;
            try {
                str.erase(0, 5);
                num = stoi(str);
                q.push(num);
            } catch (const invalid_argument& e) {
                // 예외 처리: 변환 실패 시 아무 작업도 하지 않음
            }
        }
    }

    return 0;
}