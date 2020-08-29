#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, x, y;
    cin >> n;
    vector<pair<int, int>> inputs(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        inputs[i] = {x, y};
    }
    sort(inputs.begin(), inputs.end());
    long long l = 0, currentTime = 0;
    for (pair<int, int> z : inputs)
    {
        tie(x, y) = z;
        l += y - (x + currentTime);
        currentTime += x;
    }
    cout << l << "\n";
}