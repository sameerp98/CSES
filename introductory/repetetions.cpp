#include <iostream>

using namespace std;

void solve()
{
    char curr, prev;
    int result = 1, m = 1;
    prev = curr;
    while (cin >> curr)
    {
        if (curr == prev)
        {
            result++;
            m = max(result, m);
        }
        else
        {
            m = max(result, m);
            result = 1;
        }
        prev = curr;
    }
    cout << m;
}

int main()
{
    solve();
}