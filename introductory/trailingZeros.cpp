#include <iostream>
#include <math.h>

using namespace std;
#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{

    int n, five = 0, power = 1;
    cin >> n;
    while (pow(5, power) <= n)
    {
        five += (n / pow(5, power));
        power++;
    }
    // cout << two << " " << five << " ";
    cout << five << "\n";
}

int main(void)
{
    ninja
    solve();
}