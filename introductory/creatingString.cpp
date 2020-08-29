#include <iostream>
#include <string>
#include <bits/stdc++.h>
// #include <bits/stdc++.h>

using namespace std;

bool shouldTrim(string s, int current)
{
    for (int i = 0; i <= s.length(); ++i)
    {
        if (s[i] == s[current])
            return 1;
    }
    return 0;
}

bool firstChosen(bool chosen[], int n)
{
    // int len = sizeof(chosen) / sizeof(chosen[0]);
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (chosen[i])
            count++;
    }
    if (count == 1)
        return 1;
    return 0;
}

void search(string s, vector<char> &permutation, bool chosen[], bool same[])
{
    if (permutation.size() == s.length())
    {
        //cout permutation
        for (auto x = permutation.begin(); x != permutation.end(); ++x)
        {
            cout << *x;
        }
        cout << "\n";
    }
    else
    {

        for (int i = 0; i < s.length(); ++i)
        {

            if (chosen[i])
                continue;
            chosen[i] = true;
            permutation.push_back(s[i]);
            search(s, permutation, chosen, same);
            chosen[i] = false;
            permutation.pop_back();
            // search(s, permutation, chosen);
        }
    }
}

int main(void)
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<char> p;
    bool c[s.length()] = {0};
    bool same[s.length()];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == s[i])
        {
            same[i] = 1;
        }
    }
    search(s, p, c, same);
}