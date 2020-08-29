#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

bool shouldSwap(string s, int start, int curr)
{
    for (int i = start; i < curr; ++i)
    {
        if (s[curr] == s[i])
            return 0;
    }
    return 1;
}

void solve(string s, int index, int n)
{
    if (index >= n)
    {
        cout << s << "\n";
        return;
    }
    for (int i = index; i < n; ++i)
    {
        if (shouldSwap(s, index, i))
        {
            // swap(s, index, i);
            swap(s[index], s[i]);
            solve(s, index + 1, n);
            swap(s[index], s[i]);
            // swap(s, i, index);
        }
    }
}
int fact(int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    return n * fact(n - 1);
}
int main(void)
{
    unordered_map<char, int> hmap;
    ninja
        string s;
    cin >> s;
    sort(s.begin(), s.end());
    int count = 1;
    for (int i = 0; i < s.length(); ++i)
    {
        hmap[s[i]]++;
    }
    for (auto x : hmap)
    {
        if (x.second > 1)
            count *= fact(x.second);
    }
    cout << fact(s.length()) / count << "\n";
    solve(s, 0, s.length());
}