#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, x;
    cin >> n >> x;
    vector<long long> prefixSum(n + 1);
    vector<int> in(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> in[i];
        prefixSum[i + 1] = in[i] + prefixSum[i];
    }
    map<long long, vector<int>> hmap;
    for (int i = 0; i <= n; ++i)
    {
        hmap[prefixSum[i]].push_back(i);
    }
    long long s = 0;
    for (int i = 1; i <= n; ++i)
    {
        vector<int> &c = hmap[prefixSum[i] - x];
        s += lower_bound(c.begin(), c.end(), i) - c.begin();
    }
    cout << s << "\n";
}