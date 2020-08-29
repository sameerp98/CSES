#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, target;
    int mod = 1e9 + 7;
    cin >> n >> target;
    vector<int> c(n);
    for (int &v : c)
        cin >> v;
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= target; ++j)
        {
            dp[i][j] = dp[i - 1][j];
            int l = j - c[i - 1];
            if (l >= 0)
                (dp[i][j] += dp[i][l]) %= mod;
        }
    }
    cout << dp[n][target] << endl;
}