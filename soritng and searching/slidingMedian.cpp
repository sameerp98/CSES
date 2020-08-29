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
    ordered_set indexedSet;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; ++i)
    {
        indexedSet.insert(a[i]);
    }
    cout << *indexedSet.find_by_order((k + 1) / 2 - 1) << " ";
    for (int i = k; i < n; ++i)
    {
        int med = (k + 1) / 2 - 1;
        indexedSet.insert(a[i]);
        indexedSet.erase(indexedSet.find_by_order(indexedSet.order_of_key(a[i - k])));
        cout << *indexedSet.find_by_order(med) << " ";
    }
}