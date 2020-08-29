#include <bits/stdc++.h>
#include <iostream>
#define tsukiyomi                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

using namespace std;

using ll = long long;

int main()
{
    tsukiyomi
        ll s = 0,
           result = -1;
    int n, m = 0;
    cin >> n;
    vector<int> inputs(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> inputs[i];
        m = max(m, inputs[i]);
        s += inputs[i];
    }
    result = m > s - m ? 2 * m : s;
    cout << result << "\n";
}