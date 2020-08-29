#include <iostream>
#include <bits/stdc++.h>

#define bruh                          \
    cin.tie(0);                       \
    ios_base::sync_with_stdio(false); \
    cout.tie(0);

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef multimap<ii, int> miii;
typedef priority_queue<ii, vector<ii>, greater<ii>> pq;

int main(void)
{
    bruh int n, result = 0, a, b, c;
    cin >> n;
    miii m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        m.insert(make_pair(make_pair(a, b), i));
    }
    pq q;
    vi v(n);
    for (auto it = m.begin(); it != m.end(); it++)
    {
        tie(a, b) = it->first;
        if (q.empty() || (q.top().first) >= a)
        {
            c = ++result;
        }
        else
        {
            c = q.top().second;
            q.pop();
        }
        q.push(make_pair(b, c));
        v[it->second] = c;
    }
    cout << result << "\n";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "\n";
}