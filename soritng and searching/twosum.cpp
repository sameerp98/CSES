#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;
#define ninja                         \
    cin.tie(0);                       \
    ios_base::sync_with_stdio(false); \
    cout.tie(0);

void ninjutsu()
{
    int n, x, a1, a2, b1, b2;
    cin >> n >> x;
    vector<ii> input(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a1;
        input[i] = {a1, i + 1};
    }
    sort(input.begin(), input.end());
    int front = 0, back = n - 1;
    while (front < back)
    {
        tie(a1, a2) = input[front];
        tie(b1, b2) = input[back];
        if (a1 + b1 < x)
        {
            front++;
        }
        else if (a1 + b1 > x)
        {
            back--;
        }
        else
        {
            cout << a2 << " " << b2 << "\n";
            return;
        }
    }
    cout << "IMPOSSIBLE"
         << "\n";
}

int main(void)
{
    ninja ninjutsu();
}
