#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectCube(long long x)
{
    long long root = round(cbrt(x));
    return root * root * root == x;
}

void solve()
{
    long long x;
    cin >> x;

    for (long long a = 1; a <= 10000; ++a)
    {
        long long remaining = x - (a * a * a);
        if (remaining <= 0)
            break;
        if (isPerfectCube(remaining))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
