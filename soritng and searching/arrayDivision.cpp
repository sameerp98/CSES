#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

const int mxN = 2e5;
ll a[mxN];

int main(void)
{
    int n, k, s = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    ll lb = *max_element(a, a + n), rb = 1e18;
    while (lb < rb)
    {
        ll mb = (lb + rb) / 2;
        int c = 0;
        ll ls = 0;
        for (int i = 0; i < n; ++i)
        {
            if (ls + a[i] > mb)
            {
                ++c;
                ls = 0;
            }
            ls += a[i];
        }
        ++c;
        if (c > k)
        {
            lb = mb + 1;
        }
        else
        {
            rb = mb;
        }
    }
    cout << lb;
}