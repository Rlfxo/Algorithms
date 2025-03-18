#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

int N;
stack<int> S;
stack<int> A;

void solve()
{
    stack<int> s = S;
    s.pop();
    int target = S.top();

    while (1)
    {
        if (s.empty())
        {
            cout << 0 << " ";
            return;
        }

        if (target < s.top())
        {
            A.push(s.size());
            S.pop();
            return;
        }
        else
        {
            s.pop();
        }
    }
}

int main()
{
    fstream input;
    input.open("input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        input >> n;
        S.push(n);
    }
    for (int i = 0; i < N; i++)
    {
        solve();
    }

    while (!A.empty())
    {
        cout << A.top() << " ";
        A.pop();
    }

    return 0;
}