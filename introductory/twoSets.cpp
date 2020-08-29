#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << "NO"
             << "\n";
        return;
    }
    else
    {
        if ((n - 3) % 4 == 0)
        {
            int elem = n / 2 + 1;
            cout << "YES"
                 << "\n"
                 << elem
                 << "\n"
                 << "1 2 ";
            int i = 4;
            bool pass = true;
            while (i <= n)
            {
                cout << i << " ";
                if (pass)
                {
                    i += 3;
                    pass = false;
                    continue;
                }
                i += 1;
                pass = true;
            }
            cout << "\n";
            cout << elem - 1 << "\n";
            cout << "3 ";
            i = 5, pass = false;
            while (i <= n)
            {
                cout << i << " ";
                if (pass)
                {
                    i += 3;
                    pass = false;
                    continue;
                }
                i += 1;
                pass = true;
            }
            cout << "\n";
            return;
        }
        else if (n % 4 == 0)
        {
            int i = 1;
            bool pass = true;
            cout << "YES"
                 << "\n"
                 << n / 2 << "\n";
            while (i <= n)
            {
                cout << i << " ";
                if (pass)
                {
                    pass = false;
                    i += 3;
                    continue;
                }
                i += 1;
                pass = true;
            }
            cout << "\n";
            cout << n / 2 << "\n";
            i = 2;
            pass = false;
            while (i <= n)
            {
                cout << i << " ";
                if (pass)
                {
                    pass = false;
                    i += 3;
                    continue;
                }
                i += 1;
                pass = true;
            }
            cout << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
            return;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
