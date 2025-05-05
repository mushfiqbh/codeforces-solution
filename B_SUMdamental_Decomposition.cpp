// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define fastIO (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (x == 0)
        {
            if (n == 1)
            {
                cout << -1 << "\n";
            }
            else if (n % 2 == 0)
            {
                cout << n << "\n";
            }
            else
            {
                cout << n + 3 << "\n";
            }
            continue;
            ;
        }
        if (x == 1)
        {
            if (n % 2 == 0)
            {
                cout << n + 3 << "\n";
            }
            else
            {
                cout << n << "\n";
            }
            continue;
            ;
        }

        int ans = x;
        int p = __builtin_popcount(x);
        ans += (max(0, n - p) + 1) / 2 * 2;
        cout << ans << "\n";
    }

    return 0;
}