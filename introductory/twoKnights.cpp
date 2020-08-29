#include <iostream>

#define ll long long
#define REP(i, a, b) for (int i = a; i <= b; i++)

using namespace std;

void solve(int n)
{
    cout << (ll)(n * n * (n * n - 1) - 48 - (n - 4) * 40 - (n - 4) * (n - 4) * 8) / 2 << '\n';
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    REP(i, 1, n)
    {
        solve(i);
    }
}