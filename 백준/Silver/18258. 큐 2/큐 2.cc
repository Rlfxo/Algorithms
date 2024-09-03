#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cin.exceptions(ios::failbit);

    int n;
    string str;
    cin >> n;

    queue<int> q;

    for(int i = 0; i < n+1; i++){
        getline(cin, str);

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