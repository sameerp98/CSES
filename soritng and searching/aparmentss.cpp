
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

template <class T>
using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
// change these numbers
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll result = 0, papp = 0, paprmt = 0;
    vl app, aprmt;
    int n, m, k, temp;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        app.pb(temp);
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> temp;
        aprmt.pb(temp);
    }
    sort(app.begin(), app.end());
    sort(aprmt.begin(), aprmt.end());
    while (papp < n && paprmt < m)
    {
        if (app[papp] >= aprmt[paprmt] - k && app[papp] <= aprmt[paprmt] + k)
        {
            result++;
            papp++;
            paprmt++;
        }
        else if (app[papp] < aprmt[paprmt] - k)
        {
            papp++;
        }
        else
        {
            paprmt++;
        }
    }
    cout << result << "\n";

    return 0;
}
