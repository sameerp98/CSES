
#include <bits/stdc++.h>
#include <iostream>

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
#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

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

void solve()
{
    int n, m;
    cin >> n >> m;
    int actual[n], maxPay[m];
    bool reserved[n] = {0};
    REP(i, 0, n)
    {
        cin >> actual[i];
    }
    REP(i, 0, m)
    {
        cin >> maxPay[i];
    }
    int on = n - 1;
    sort(actual, actual + n);
    REP(i, 0, m)
    {
        int pos = lower_bound(actual, actual + n, maxPay[i]) - actual;
        if (pos > on)
        {
            if (on < 0)
            {
                cout << -1 << "\n";
                continue;
            }
            cout << actual[on] << "\n";
            // actual[on] = -1;
            reserved[on] = true;
            on--;
        }
        else
        {

            if (actual[pos] == maxPay[i] && !reserved[pos])
            {
                while (actual[pos + 1] == maxPay[i] && pos < n - 1)
                {
                    pos++;
                }
                cout << actual[pos] << "\n";
                reserved[pos] = true;
                // actual[pos] == -1;
                continue;
            }
            while ((pos >= 0 && actual[pos] > maxPay[i]) || reserved[pos])
            {
                pos--;
            }
            if (pos < 0)
            {
                cout << -1 << "\n";
                continue;
            }
            else
            {
                cout << actual[pos] << "\n";
                reserved[pos] = true;
            }
        }
    }
}

int main(void)
{
    ninja solve();
    return 0;
}
