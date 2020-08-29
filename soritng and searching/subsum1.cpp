#include <bits/stdc++.h>

using namespace std;

#define notInt                        \
    cin.tie(0);                       \
    ios_base::sync_with_stdio(false); \
    cout.tie(0);

int main(void)
{
    notInt int n, sum = 0, t, s = 0, j = 0, k = 0;
    cin >> n >> t;
    vector<int> in(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> in[i];
    }
    while (k < n)
    {
        if (sum < t)
        {
            if (k >= n)
                break;
            sum += in[k++];
        }
        else if (sum > t)
        {
            sum -= in[j++];
        }
        else
        {

            sum -= in[j++];
            sum += in[k++];
        }
        if (sum == t)
            s++;
    }
    cout << s << "\n";
}