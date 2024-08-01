#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    int n, m, i, j, temp;
    fin >> n >> m;

    vector<vector<int>> v(n);


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            fin >> temp;
            v[i].push_back(temp);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            fin >> temp;
            v[i][j] += temp;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}