#include <iostream>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (2 * a - b >= 0 && (2 * a - b) % 3 == 0 && 2 * b - a >= 0 && (2 * b - a) % 3 == 0)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}