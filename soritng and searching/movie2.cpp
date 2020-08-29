#include <bits/stdc++.h>

using namespace std;
using ii = tuple<int, int>;
using ibi = tuple<int, bool, int>;
using vii = vector<ii>;
using vibi = vector<ibi>;
using si = set<int>;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, l = 0, r = 0, x, y, z;
    cin >> n >> k;
    vii in(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        in[i] = {y, x};
    }
    sort(in.begin(), in.end(), greater<ii>());
    vibi b(2 * n);
    for (int i = 0; i < n; ++i)
    {
        tie(y, x) = in[i];
        b[2 * i] = {x, 0, i};
        b[2 * i + 1] = {y, 1, i};
    }
    sort(b.begin(), b.end());
    si s;
    for (int i = 0; i < 2 * n; ++i)
    {
        tie(y, z, x) = b[i];
        if (!z)
            s.insert(x), l++;
        else if (s.count(x))
            s.erase(x), l--, r++;
        if (i < 2 * n - 1 && get<0>(b[i + 1]) == y)
            continue;
        if (l > k)
            s.erase(s.begin()), l--;
    }
    cout << r << endl;
}