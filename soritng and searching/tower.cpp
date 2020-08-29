#include <bits/stdc++.h>
#define TPain                         \
    cin.tie(0);                       \
    ios_base::sync_with_stdio(false); \
    cout.tie(0);

using namespace std;

int main(void)
{
    TPain int n, t, r, d;
    cin >> n;
    multiset<int> towers;
    multiset<int>::iterator itlow;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        itlow = towers.upper_bound(t);
        if (itlow == towers.end())
        { //element not found
            towers.insert(t);
        }
        else
        { //element
            //  exists then erase the greatest value and insert current value
            // d = distance(itlow, towers.begin());
            if (*itlow != t) //if the elements are same meaning the blocks have same weight
                towers.erase(itlow);
            towers.insert(t);
        }
    }
    cout << towers.size() << "\n";
}