#include <bits/stdc++.h>
#define MODN 1000000007

using namespace std;

#define mushimushi                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    long long res = 1, b, a;
    cin >> a >> b;
    while (b > 0)
    {
        if (b & 1)
            res = (a * res) % MODN;
        a = (a * a) % MODN;
        b >>= 1;
    }
    cout << res << "\n";
}

int main(void)
{
    mushimushi int n;
    cin >> n;
    while (n--)
        solve();
}