#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, target;
    cin >> n >> target;
    vector<int> prices(n), pages(n);
    for (int &v : prices)
        cin >> v;
    for (int &v : pages)
        cin >> v;
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
    dp[0][0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= target; ++j)
        {
            dp[i][j] = dp[i - 1][j];
            int left = j - prices[i - 1];
            if (left >= 0)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - prices[i - 1]] + pages[i - 1]);
            }
        }
    }
    cout << dp[n][target] << endl;
}