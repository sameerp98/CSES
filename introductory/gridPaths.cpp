#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll cnt, steps = 0;
bool v[7][7] = {0};
int reserved[49];
void solve(ll x, ll y)
{
    if (x == 6 && y == 0)
    {
        if (steps == 48)
            cnt++;
        return;
    }
    bool test = v[x][y] ||
                ((y > 0 && y < 6 && !v[x][y + 1] && !v[x][y - 1] && ((x == 0 && v[x + 1][y]) || (x == 6 && v[x - 1][y]))) || (x > 0 && x < 6 && !v[x + 1][y] && !v[x - 1][y] && ((y == 0 && v[x][y + 1]) || (y == 6 && v[x][y - 1])))) || (x > 0 && x < 6 && y > 0 && y < 6 && v[x - 1][y] && v[x + 1][y] && !v[x][y - 1] && !v[x][y + 1]) || (x > 0 && x < 6 && y > 0 && y < 6 && v[x][y - 1] && v[x][y + 1] && !v[x - 1][y] && !v[x + 1][y]);
    if (test)
    {
        return;
    }
    v[x][y] = true;
    if (reserved[steps] != -1)
    {
        switch (reserved[steps])
        {
        case 0:
            if (x > 0 && !v[x - 1][y])
            { //up
                steps++;
                solve(x - 1, y);
                steps--;
            }
            break;
        case 1: //right
            if (y < 6 && !v[x][y + 1])
            { //RIGHT
                steps++;
                solve(x, y + 1);
                steps--;
            }
            break;
        case 2: //Down
            if (x < 6 && !v[x + 1][y])
            { //Down
                steps++;
                solve(x + 1, y);
                steps--;
            }
            break;
        case 3:
            if (y > 0 && !v[x][y - 1])
            { //left
                steps++;
                solve(x, y - 1);
                steps--;
            }
            break;
        }
        v[x][y] = false;
        return;
    }
    if (x > 0 && !v[x - 1][y])
    { //up
        steps++;
        solve(x - 1, y);
        steps--;
    }
    if (y < 6 && !v[x][y + 1])
    { //RIGHT
        steps++;
        solve(x, y + 1);
        steps--;
    }
    if (x < 6 && !v[x + 1][y])
    { //Down
        steps++;
        solve(x + 1, y);
        steps--;
    }
    if (y > 0 && !v[x][y - 1])
    { //left
        steps++;
        solve(x, y - 1);
        steps--;
    }

    v[x][y] = false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '?')
            reserved[i] = -1;
        else if (str[i] == 'U')
            reserved[i] = 0;
        else if (str[i] == 'R')
            reserved[i] = 1;
        else if (str[i] == 'D')
            reserved[i] = 2;
        else if (str[i] == 'L')
            reserved[i] = 3;
    }
    solve(0, 0);
    cout << cnt << "\n";
    return 0;
}
