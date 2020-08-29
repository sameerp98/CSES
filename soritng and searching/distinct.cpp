#include <bits/stdc++.h>

using namespace std;

#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n, res = 1;
    cin >> n;
    long long temp;
    long long arr[n];
    for (long long i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (long long i = 1; i < n; ++i)
    {
        if (arr[i] == arr[i - 1])
            continue;
        res++;
    }
    cout << res << "\n";
}
int main(void)
{
    ninja
    solve();
}