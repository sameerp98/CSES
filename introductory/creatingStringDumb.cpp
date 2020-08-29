#include <bits/stdc++.h>

#define ninja                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

using namespace std;

void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> answers;
    do
    {
        answers.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << answers.size() << "\n";
    for (auto x : answers)
    {
        cout << x << "\n";
    }
}

int main(void)
{
    solve();
}