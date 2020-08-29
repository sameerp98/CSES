#include <bits/stdc++.h>

using namespace std;

#define madara                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void uchiha()
{
    int n, i = 0, j = 0, m = INT_MIN;
    set<int> unique;
    cin >> n;
    vector<int> in(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> in[i];
    }
    while (j < n)
    {
        if (unique.count(in[j]))
        {
            m = max(m, j - i);
            while (in[i] != in[j])
            {
                unique.erase(in[i++]);
            }
            i++;
        }
        else
        {
            unique.insert(in[j]);
        }
        j++;
    }
    m = max(m, j - i);
    cout << m << "\n";
}
int main(void)
{
    madara uchiha();
}