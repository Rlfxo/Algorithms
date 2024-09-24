#include <iostream>
#include <deque>
#include <fstream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin.exceptions(ios::failbit);

    fstream fin("input.txt", ios::in);
    deque<int> d;
    int N;
    fin >> N;

    for (int i = 0; i < N; i++)
    {
        int cmd;
        int num = 0;
        fin >> cmd;
        switch (cmd)
        {
        case 1:
            fin >> num;
            d.push_front(num);
            break;
        case 2:
            fin >> num;
            d.push_back(num);
            break;
        case 3:
            if (!d.empty())
            {
                cout << d.front() << endl;
                d.pop_front();
            }
            else
            {
                cout << -1 << endl;
            }
            break;
        case 4:
            if (!d.empty())
            {
                cout << d.back() << endl;
                d.pop_back();
            }
            else
            {
                cout << -1 << endl;
            }
            break;
        case 5:
            cout << d.size() << endl;
            break;
        case 6:
            cout << d.empty() << endl;
            break;
        case 7:
            if (!d.empty())
            {
                cout << d.front() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
            break;
        case 8:
            if (!d.empty())
            {
                cout << d.back() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
            break;
        default:
            break;
        }

    }
    return 0;
}