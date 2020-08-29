
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

#define REP(i, a, b) for (int i = a; i < (b); i++)
#define REPd(i, a, b) for (int i = (b)-1; i >= a; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

// change these numbers
const int MOD = 1000000000;
const ll INF = 1e18;
const int MX = 100001;

void solve()
{
    int n, a, b, m = 0, globalm = 0;
    cin >> n;
    vi arrival(n), departure(n);
    REP(i, 0, n)
    {
        cin >> a >> b;
        arrival[i] = a;
        departure[i] = b;
    }
    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());
    a = b = 0;
    while (a < n && b < n)
    {
        if (arrival[a] < departure[b])
        {
            ++a;
            ++m;
            globalm = max(m, globalm);
        }
        else
        {
            ++b;
            --m;
        }
    }
    cout << globalm << "\n";
}

int main(void)
{
    ninja solve();
    return 0;
}
