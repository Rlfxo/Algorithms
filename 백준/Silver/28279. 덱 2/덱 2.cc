#include <iostream>
#include <deque>
#define FASTIO cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

using namespace std;

int main()
{
    FASTIO
    cin.exceptions(ios::failbit);

    deque<int> d;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int cmd;
        int num = 0;
        cin >> cmd;
        switch (cmd)
        {
        case 1:
            cin >> num;
            d.push_front(num);
            break;
        case 2:
            cin >> num;
            d.push_back(num);
            break;
        case 3:
            if (!d.empty())
            {
                cout << d.front() << '\n';
                d.pop_front();
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        case 4:
            if (!d.empty())
            {
                cout << d.back() << '\n';
                d.pop_back();
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        case 5:
            cout << d.size() << '\n';
            break;
        case 6:
            cout << d.empty() << '\n';
            break;
        case 7:
            if (!d.empty())
            {
                cout << d.front() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        case 8:
            if (!d.empty())
            {
                cout << d.back() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        default:
            break;
        }

    }
    return 0;
}