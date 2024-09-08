#include <iostream>
#include <functional>
#include <list>

using namespace std;

void show(list<int> l)
{
    list<int>::iterator itr;
    cout << "List: ";
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

bool func(const int k)
{
    if (k % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
/*
- 삽입 : push, l.insert(itr, k);
- 삭제 : pop, l.erase(itr);
- 정렬 : l.reverse(); l.sort(); (오름차순)
- 조건 : l.remove(k); l.remove_if(Predicate);
*/

int main()
{
    list<int> l;
    show(l);

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);
    show(l);

    l.sort();
    show(l);

    l.reverse();
    show(l);

    l.insert(l.begin(), 0);

    list<int>::iterator itr = l.begin();
    itr++;
    itr++;
    l.insert(itr, 7);
    show(l);

    l.sort(less<int>());
    show(l);

    itr = l.end();
    l.insert(itr, 6);
    l.insert(itr, 6);
    show(l);

    l.remove(6);
    show(l);

    l.remove_if([](int k){return k%2 == 0;});
    show(l);
    l.remove_if(func);
    show(l);

    return 0;
}