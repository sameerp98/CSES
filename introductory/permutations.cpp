#include <iostream>

using namespace std;
#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return;
    }
    for (int i = n - 1; i > 0; i -= 2)
    {
        cout << i << " ";
    }
    for (int i = n; i > 0; i -= 2)
    {
        cout << i << " ";
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}