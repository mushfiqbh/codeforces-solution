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
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll top = 100000, n, m;
        cin >> n >> m;
        if (m > n)
        {
            cout << 1 << endl;
            goto end;
        }

        for (ll i = 30; i > -1; i--)
        {
            ll x = n;
            ll total = 0;
            while (x != 0)
            {
                total++;
                x /= m + i;
                if (m + i == 1)
                {
                    cout << top << endl;
                    goto end;
                }
            }
            top = min(i + total, top);
        }
        cout << top << endl;
    end:;
    }

    return 0;
}