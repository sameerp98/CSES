#include <iostream>
#include <climits>
using namespace std;

//USER LONG LONG RETARD

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int max(int a, int b, int c)
{
    return max(max(a, b), c);
}

int maxSubArrayCrossing(int input[], int low, int mid, int high)
{
    int sum = 0, leftSum = INT_MIN, rightSum = INT_MIN;
    for (int i = mid; i >= low; --i)
    {
        sum += input[i];
        if (sum > leftSum)
            leftSum = sum;
    }
    sum = 0;
    for (int i = mid + 1; i <= high; ++i)
    {
        sum += input[i];
        if (sum > rightSum)
            rightSum = sum;
    }
    return max(leftSum, rightSum, leftSum + rightSum);
}

int solve(int input[], int low, int high)
{
    if (low == high)
        return input[low];
    else
    {
        int mid = (low + high) / 2;
        int left = solve(input, low, mid);
        int right = solve(input, mid + 1, high);
        int cross = maxSubArrayCrossing(input, low, mid, high);
        return max(left, right, cross);
    }
}

int main()
{
    int n;
    cin >> n;
    int input[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> input[i];
    }
    cout << solve(input, 0, n - 1) << "\n";
}