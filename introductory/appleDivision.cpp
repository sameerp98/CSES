#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

typedef long long ll;
typedef vector<ll> vl;
#define pb push_back

const int INF = 1e18;

using namespace std;

ll min_global = INF, min_local, n;
vl x, a;

void test()
{
    ll res = 0, px = 0;
    for (int i = 0; i < n; ++i)
    {
        if (x[px] == i)
        {
            res += a[i];
            px++;
        }
        else
        {
            res -= a[i];
        }
    }
    min_local = abs(res);
    min_global = min(min_global, min_local);
}

void solve(ll i)
{

    if (i == n)
    {
        test();
        return;
    }
    // solve(i + 1);
    x.pb(i);
    solve(i + 1);
    x.pop_back();
    solve(i + 1);
}

int main(void)
{
    ninja
            cin >>
        n;
    ll temp;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        a.pb(temp);
    }
    solve(0);
    cout << min_global << "\n";
}