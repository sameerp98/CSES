#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    char n;
    int length = 0;
    unordered_map<char, int> hmap;
    while (cin >> n)
    {
        hmap[n]++;
        length++;
    }
    int oddCount = 0;
    char oddChar;
    for (auto x : hmap)
    {
        if (x.second % 2 != 0)
        {
            oddCount++;
            oddChar = x.first;
        }
    }
    if (oddCount > 1 || oddCount == 1 && !(length & 1))
    {
        cout << "NO SOLUTION";
        return;
    }
    string firstHalf = "", secondHalf = "";
    for (auto x : hmap)
    {
        string s(x.second / 2, x.first);
        x.second /= 2;
        firstHalf += s;
        secondHalf = s + secondHalf;
    }
    string output = oddCount == 1 ? (firstHalf + oddChar + secondHalf)
                                  : (firstHalf + secondHalf);
    cout << output;
}

int main(void)
{
    ninja
    solve();
}