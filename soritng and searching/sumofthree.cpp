#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;

int main()
{
    int n, k, l, x, y, z;
    ii val;
    vii::iterator it;
    cin >> n >> x;
    vii a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> y;
        a[i] = {y, i + 1};
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; ++i)
    {
        tie(k, y) = a[i];
        if (k >= x)
            break;
        for (int j = i + 1; j < n - 1; ++j)
        {
            tie(l, z) = a[j];
            if (k + l >= x)
                break;
            auto it = lower_bound(a.begin() + j + 1, a.end(), make_pair(x - (k + l), 0));
            if (k + l + it->first != x)
                continue;
            cout << y << " " << z << " " << it->second << "\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE"
         << "\n";
}
