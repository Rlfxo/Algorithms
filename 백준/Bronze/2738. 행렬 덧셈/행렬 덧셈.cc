#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    int n, m, i, j, temp;
    cin >> n >> m;

    vector<vector<int>> v(n);


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> temp;
            v[i].push_back(temp);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> temp;
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