#include <iostream>
#include <vector>

using namespace std;

int x = 9, y = 9;
vector<vector<int>> v;
vector<int> vv;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    int i, j = 0;
    for (i = 0; i < x; i++)
        vv.push_back(0);
    for (i = 0; i < y; i++)
        v.push_back(vv);

    int input, max = 0, m_x = 1, m_y = 1;
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            cin >> input;
            if(input > max){
                max = input;
                m_x = i+1;
                m_y = j+1;
            }
            v[i][j] = input;
        }
    }

    cout << max << endl;
    cout << m_x << " " << m_y;
    return 0;
}