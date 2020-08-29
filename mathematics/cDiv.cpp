#include <bits/stdc++.h>

using namespace std;
#define Ddawg                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
int MAXN = 1000000;

int main(void)
{
    Ddawg vector<int> d(MAXN + 1);
    for (int i = 1; i <= MAXN; i++)
        for (int j = i; j <= MAXN; j += i)
            d[j]++;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        cout << d[x] << "\n";
    }
}