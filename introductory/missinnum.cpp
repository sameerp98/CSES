#include <iostream>

using namespace std;

void solve()
{
    int n, result = 1;
    cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        result = i ^ result;
    }
    for (int i = 2; i <= n; i++)
    {
        int temp;
        cin >> temp;
        result = result ^ temp;
    }
    cout << result;
}

int main(void)
{
    solve();
}