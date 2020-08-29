#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <vector>
#include <iostream>

using namespace std;
using namespace __gnu_pbds;
// #include <ext/pb_ds/
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main(void)
{
    ordered_set s;
    int n, k;
    long long m, old_m, res = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; ++i)
        s.insert(a[i]);
    m = *s.find_by_order((k + 1) / 2 - 1);
    for (int i = 0; i < k; ++i)
    {
        res += abs(m - a[i]);
    }
    cout << res << " ";
    old_m = m;
    for (int i = k; i < n; ++i)
    {
        s.erase(s.find_by_order(s.order_of_key(a[i - k])));
        s.insert(a[i]);
        m = *s.find_by_order((k + 1) / 2 - 1);
        res = res - abs(old_m - a[i - k]) + abs(m - a[i]);
        if (k % 2 == 0)
            res -= (m - old_m);
        old_m = m;
        cout << res << " ";
    }
    cout << endl;
}