#include <bits/stdc++.h>

using namespace std;
#define rage                          \
    cin.tie(0);                       \
    ios_base::sync_with_stdio(false); \
    cout.tie(0);
using ii = pair<int, int>;

int main(void)
{
    rage int x, n, k, p, q;
    cin >> n >> k;
    set<ii> f;
    set<ii> b;
    f.insert({n, n});
    b.insert({n, n});
    while (k--)
    {
        cin >> x;
        auto it = f.lower_bound({x, 0});
        tie(p, q) = *it;
        f.erase(it);
        f.insert({x, q - (p - x)});
        f.insert({p, p - x});
        b.erase({q, p});
        b.insert({q - (p - x), x});
        b.insert({p - x, p});
        cout << b.rbegin()->first << " ";
    }
    cout << "\n";
}