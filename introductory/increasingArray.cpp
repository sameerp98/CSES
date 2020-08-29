#include <iostream>

using namespace std;

#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n;
    long long result = 0, m = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        long long temp;
        cin >> temp;
        m = max(m, temp);
        if (m > temp)
            result += m - temp;
    }
    cout << result;
}

int main(void)
{
    solve();
}
