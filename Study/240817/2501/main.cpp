#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    vector<int> v;
    vector<int>::iterator itr = v.begin();

    int n, k, i;
    fin >> n >> k;

    for(i = 1; i <=n; i++){
        if(n % i == 0) v.push_back(i);
    }

    if(v.size() < k) cout << 0;
    else cout << v[k-1];
    
    return 0;
}