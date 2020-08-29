#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    //m=1..6
    int mod = 1e9 + 7;
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; i - j >= 0 && j <= 6; ++j)
        {
            (dp[i] += dp[i - j]) %= mod;
        }
    }
    cout << dp[n];
}