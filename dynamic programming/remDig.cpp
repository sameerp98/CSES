#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    if (n <= 9)
    {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 1; i <= 9; ++i)
    {
        dp[i] = 1;
    }
    for (int i = 10; i <= n; ++i)
    {
        int temp = i, m = 0;
        while (temp > 0)
        {
            m = max(temp % 10, m);
            temp /= 10;
        }
        dp[i] = 1 + dp[i - m];
    }
    cout << dp[n] << endl;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> dp(n + 1, 1e9);
//     dp[0] = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         for (char c : to_string(i))
//         {
//             dp[i] = min(dp[i], dp[i - (c - '0')] + 1);
//         }
//     }
//     cout << dp[n] << endl;
// }
