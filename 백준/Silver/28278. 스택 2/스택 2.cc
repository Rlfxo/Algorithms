#include <iostream>
#include <stack>
#include <fstream>

using namespace std;

stack<int> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);
    
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        switch (x)
        {
        case 1:
            int y;
            cin >> y;
            s.push(y);
            break;
        case 2:
            if (s.size() == 0)
                cout << -1 << '\n';
            else
            {
                cout << s.top() << '\n';
                s.pop();
            }
            break;
        case 3:
            cout << s.size() << '\n';
            break;
        case 4:
            cout << s.empty() << '\n';
            break;
        case 5:
            if (s.size() == 0)
                cout << -1 << '\n';
            else
                cout << s.top() << '\n';
            break;
        }
    }

    return 0;
}