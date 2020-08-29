#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<long long> in(n + 1);
    vector<vector<long long>> b(n);
    b[0].push_back(0);
    for (int i = 0; i < n; ++i)
    {
        cin >> in[i + 1];
        (in[i + 1] += in[i]) %= n;
        if (in[i + 1] < 0)
            in[i + 1] += n;
        b[in[i + 1]].push_back(i + 1);
    }
    long long s = 0;
    for (int i = 1; i <= n; ++i)
    {
        long long x = (in[i] - n) % n;
        if (x < 0)
            x += n;
        s += lower_bound(b[x].begin(), b[x].end(), i) - b[x].begin();
    }
    cout << s << "\n";
}
