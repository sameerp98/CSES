
#include <bits/stdc++.h>

using namespace std;

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
    ll result = 0, diff = 0;
    multiset<ll> input;
    ll n, x, current, temp;
    cin >> n >> x;
    for (ll i = 0; i < n; ++i)
    {
        cin >> temp;
        input.insert(temp);
    }
    while (!input.empty())
    {
        if (diff == 0)
        {
            result++;
            diff = x - *input.begin();
            input.erase(input.begin());
        }
        else
        {
            auto it = input.lower_bound(diff);
            if (it == input.begin() && *it > diff)
            {
                diff = x - *it;
                result++;
                input.erase(it);
                continue;
            }
            if (it == input.end() || *it > diff)
            {
                it--;
            }
            input.erase(it);
            diff = 0;
        }
    }
    cout << result << "\n";

    return 0;
}
