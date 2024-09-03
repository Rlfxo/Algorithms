#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cin.exceptions(ios::failbit);

    int n, num = 1;
    bool ret = true;
    cin >> n;

    vector<int> v;
    stack<int> input;
    stack<int> temp;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    for(int i = 0; i < n; i++){
        int x = v.back();
        input.push(x);
        v.pop_back();
    }

    while(true){
        if(input.empty() && temp.empty()){
            cout << "Nice" << endl;
            break;
        }

        if(!input.empty() && input.top() == num){
            input.pop();
            num++;
        }else if(!temp.empty() && temp.top() == num){
            temp.pop();
            num++;
        }else if(!input.empty()){
            temp.push(input.top());
            input.pop();
        }else{
            cout << "Sad" << endl;
            break;
        }
    }

    return 0;
}