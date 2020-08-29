#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll k = 1;
    int n, c, t;
    cin >> n >> t;
    vector<int> aasnil(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> aasnil[i];
    }
    while (true)
    {
        c = 0;
        for (int z : aasnil)
        {
            c += k / z;
        }
        if (c >= t)
            break;
        k = k * 2;
    }
    ll l = 0;
    for (ll b = k / 2; b >= 1; b /= 2)
    {
        while (l + b <= k)
        {
            c = 0;
            for (int z : aasnil)
            {
                c += (l + b) / z;
            }
            if (c >= t)
                break;
            l += b;
        }
    }
    cout << l + 1 << "\n";
}