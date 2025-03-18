#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream input("input.txt");

    int N;
    input >> N;

    vector<pair<int, int>> v;

    for(int i = 0; i < N; i++) {
        int n;
        input >> n;
        if(i != 0) {
            if(v.back().second < n) {
                v.pop_back();
            }
        }
        v.push_back(make_pair(i+1, n));

        for(int j = v.size()-1; j >= 0; j--) {
            if(j == 0){
                cout << 0 << " ";
                break;
            }
            if(v[j-1].second > n) {
                cout << v[j-1].first << " ";
                break;
            }
        }
    }
}