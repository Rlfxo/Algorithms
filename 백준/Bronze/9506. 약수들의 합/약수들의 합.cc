#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    while (true)
    {
        bool result = false;
        int n, i, sum = 0;
        cin >> n;
        if (n == -1) break;

        vector<int> v;
        vector<int>::iterator itr = v.begin();
        for(i = 1; i < n; i++){
            if(n % i == 0) v.push_back(i);
        }

        for(itr = v.begin(); itr != v.end(); itr++){
            sum += *itr;
        }

        if(sum == n){
            cout << n << " = ";
            for(itr = v.begin(); itr != v.end(); itr++){
                if(itr == v.end() - 1) cout << *itr << endl;
                else cout << *itr << " + ";
            }
        } else {
            cout << n << " is NOT perfect." << endl;
        }
    }
    return 0;
}