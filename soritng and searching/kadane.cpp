#include <iostream>
#include <climits>

using namespace std;

void solve()
{
    //USER LONG LONG HERE DUMBFUCK
    int maxSoFar = INT_MIN, maxEndHere = 0, n, t;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        maxEndHere = maxEndHere + t;
        if (maxSoFar < maxEndHere)
        {
            maxSoFar = maxEndHere;
        }
        if (maxEndHere < 0)
        {
            maxEndHere = 0;
        }
    }
    cout << maxSoFar << "\n";
}
int main()
{
    solve();
}