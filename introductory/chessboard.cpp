#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int MAX = 8;
int c = 0;
vector<int> col(2 * MAX, 0), diag1(2 * MAX, 0), diag2(2 * MAX, 0);
bool reserved[MAX][MAX] = {0};

void solve(int y)
{
    if (y == MAX)
    {
        c++;
        return;
    }
    for (int x = 0; x < MAX; ++x)
    {
        if (col[x] || diag1[x + y] || diag2[x - y + MAX - 1] || reserved[x][y])
            continue;
        col[x] = diag1[x + y] = diag2[x - y + MAX - 1] = 1;
        solve(y + 1);
        col[x] = diag1[x + y] = diag2[x - y + MAX - 1] = 0;
    }
}

int main(void)
{
    char t;
    for (int i = 0; i < MAX; ++i)
    {
        for (int j = 0; j < MAX; ++j)
        {
            cin >> t;
            if (t == '*')
            {
                reserved[i][j] = 1;
            }
        }
    }
    solve(0);
    cout << c << "\n";
}