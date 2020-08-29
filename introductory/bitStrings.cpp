#include <iostream>

#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
const unsigned int M = 1000000007;
void solve()
{
    int n;
    cin >> n;
    int base = 1;
    for (int i = 1; i <= n; ++i)
    {
        base = (base * 2) % M;
    }
    cout << base << "\n";
}

int main(void)
{
    ninja
    solve();
}