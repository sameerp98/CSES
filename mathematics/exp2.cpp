#include <bits/stdc++.h>
#define MODN 1000000007
using namespace std;

#define kewl                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

long long pow(long long a, long long p, long long m)
{
    long long r = 1, e = a;
    while (p)
    {
        if (p & 1)
            (r *= e) %= m;
        (e *= e) %= m;
        p >>= 1;
    }
    return r;
}

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long x = pow(b, c, MODN - 1); //Fermat's little theoram x*(m-1)+y
    cout << pow(a, x, MODN) << "\n";
}

int main(void)
{
    kewl int n;
    cin >> n;
    while (n--)
        solve();
}