#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using ii = pair<int, int>;
using vii = vector<ii>;

int main(void)
{
    int n, p, q;
    cin >> n;
    vi a(n);
    vii b;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
    {
        while (!b.empty())
        {
            tie(p, q) = b.back();
            if (q < a[i])
                break;
            b.pop_back();
        }
        if (b.empty())
            p = 0;
        cout << p << " ";
        b.push_back({i + 1, a[i]});
    }
    cout << "\n";
}