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

        ll n;
        cin >> n;
        ll x;
        cin >> x;
        ll a[n];
        ll b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            ll val = a[i];
            ll count = 1;
            while (val % x == 0)
            {
                val = val / x;
                count++;
            }

            b[i] = count;
        }

        ll index = 0;
        ll m = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            if (b[i] < m)
            {
                m = b[i];
                index = i;
            }
        }
        ll sum = 0;
        for (ll i = index; i < n; i++)
            sum += m * a[i];
        for (ll i = index - 1; i >= 0; i--)
            sum += (m + 1) * a[i];

        cout << sum << endl;
    }

    return 0;
}