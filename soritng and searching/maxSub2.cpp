#include <bits/stdc++.h>

using namespace std;

using ii = tuple<int, int>;
using vi = vector<int>;
using dii = deque<ii>;
using ll = long long;

int main(void)
{
    int n, a, b;
    cin >> n >> a >> b;
    vi x(n), y(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
        y[i] = x[i];
        if (i)
            y[i] += y[i - 1];
    }
    dii q;
    for (int i = a; i < b; ++i)
    {
        while (!q.empty() && y[i] > get<0>(q.back()))
            q.pop_back();
        q.push_front({y[i], i});
    }
    ll m = -2e18;
    ll s = y[a - 1];
    for (int i = a;; ++i)
    {
        ll k = 0;
        if (!q.empty())
        {
            k = get<0>(q.front());
            k -= y[i - 1];
        }
        ll r = s;
        if (k > 0)
            r += k;
        if (k > m)
            m = k;
        if (i == n)
            break;
        s -= x[i - a];
        s += x[i];
        while (!q.empty() && get<1>(q.front()) <= i)
            q.pop_front();
        if (i + b - a < n)
        {
            while (!q.empty() && y[i + b - a] > get<0>(q.back()))
                q.pop_back();
            q.push_back({y[i + b - a], i + b - a});
        }
    }
    cout << m << "\n";
}