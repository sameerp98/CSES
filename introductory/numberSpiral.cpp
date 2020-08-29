#include <iostream>
// #include <unistd.h>
using namespace std;
#define ll long long
#define gc() getchar_unlocked()
#define pc(x) putchar_unlocked(x)

inline long getLong()
{
    char ch = gc();
    ll val = 0;
    while (ch == ' ' || ch == '\n')
    {
        ch = gc();
    }
    while (ch >= '0' && ch <= '9')
    {
        // pc(ch);
        val = val * 10 + (ch - '0');
        ch = gc();
    }
    return val;
}

inline void writeLong(ll n)
{
    ll N = n, rev = 0, c = 0;
    rev = n;
    while (rev % 10 == 0)
    {
        ++c;
        rev /= 10;
    }
    rev = 0;
    while (N != 0)
    {
        rev = rev * 10 + N % 10;
        N /= 10;
    }
    while (rev != 0)
    {
        pc(rev % 10 + '0');
        rev /= 10;
    }
    while (c--)
    {
        pc('0');
    }
    pc('\n');
}
void solve()
{
    ll y, x, result;
    y = getLong();
    x = getLong();
    if (max(y, x) & 1)
    { //odd
        if (y > x)
        {
            result = y * y - (y - 1) - ((y - 1) - (x - 1));
            writeLong(result);
        }
        else
        {
            result = x * x - (y - 1);
            writeLong(result);
        }
    }
    else
    {

        if (y >= x)
        {
            result = y * y - (x - 1);
            writeLong(result);
        }
        else
        {
            result = x * x - (x - 1) - ((x - 1) - (y - 1));
            writeLong(result);
        }
    }
}

int main(void)
{
    ll t;
    t = getLong();
    while (t--)
        solve();
}