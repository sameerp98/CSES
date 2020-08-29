#include <iostream>
#include <climits>
using namespace std;

//USER LONG LONG RETARD
long long ans = 0;
int targetSum = 0;

void maxSubArrayCrossing(int input[], int low, int mid, int high)
{
    int sum = 0, leftSum = INT_MIN, rightSum = INT_MIN;
    for (int i = mid; i >= low; --i)
    {
        sum += input[i];
        if (sum > leftSum && sum <= targetSum)
            leftSum = sum;
    }
    sum = 0;
    for (int i = mid + 1; i <= high; ++i)
    {
        sum += input[i];
        if (sum > rightSum && sum <= targetSum)
            rightSum = sum;
    }
    if (leftSum == targetSum)
    {
        ans++;
    }
    if (rightSum == targetSum)
    {
        ans++;
    }
    else if (rightSum + leftSum == targetSum)
    {
        ans++;
    }
    return;
}

void solve(int input[], int low, int high)
{
    if (low == high)
    {
        if (input[low] == targetSum)
            ++ans;
        return;
    }
    else
    {
        int mid = (low + high) / 2;
        solve(input, low, mid);
        solve(input, mid + 1, high);
        maxSubArrayCrossing(input, low, mid, high);
        return;
    }
}

int main()
{
    int n;
    cin >> n >> targetSum;
    int input[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> input[i];
    }
    solve(input, 0, n - 1);
    cout << ans << "\n";
}