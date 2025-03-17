//1 1 2 2 2 8
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    vector<int> v = {1, 1, 2, 2, 2, 8};
    vector<int>::iterator itr = v.begin();

    int i, input;
    for(i = 0; i < v.size(); i++){
        fin >> input;
        v[i] = v[i] - input;
    }

    for(itr = v.begin(); itr != v.end(); itr++){
        cout << *itr << " ";
    }

    return 0;
}