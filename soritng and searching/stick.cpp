#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define sasuke                        \
    cin.tie(0);                       \
    ios_base::sync_with_stdio(false); \
    cout.tie(0);

using namespace std;

void sharingan()
{
    ll result = 0, sum = 0;
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    int mid = input[n / 2]; //Slect median
    for (int z : input)
    {
        result += abs(z - mid);
    }
    cout << result << "\n";
}
int main()
{
    sasuke sharingan();
}