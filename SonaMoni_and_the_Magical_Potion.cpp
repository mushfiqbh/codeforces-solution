// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int product = 1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            product *= x;
        }

        ll ans = 0;

        while (product > 0)
        {
            if (product % 10 == 0)
            {
                ans++;
            }
            product /= 10;
        }

        cout << ans << endl;
    }

    return 0;
}