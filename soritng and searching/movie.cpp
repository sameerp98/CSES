#include <bits/stdc++.h>

using namespace std;

using ii = pair<int, int>;

int main(void)
{
    int n, res = 0, x, y, recentEndTime = 0;
    cin >> n;
    vector<ii> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        p[i] = {y, x};
    }
    sort(p.begin(), p.end());
    for (ii z : p)
    {
        tie(y, x) = z;
        if (x >= recentEndTime)
            recentEndTime = y, res++;
    }
    cout << res << "\n";
}