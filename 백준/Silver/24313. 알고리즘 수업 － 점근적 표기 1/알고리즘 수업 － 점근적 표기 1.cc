#include <iostream>
#include <stdint.h>

using namespace std;

int main(void)
{
    int64_t a0, a1, c, n, result = 0;
    cin >> a1 >> a0 >> c >> n;

    if(a1 * n + a0 <= c * n && a1 <= c)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    

    return 0;
} 