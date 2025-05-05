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

        vector<ll> a(3);
        for (ll &x : a)
            cin >> x;

        ll ans = 0;
        sort(a.rbegin(), a.rend());

        for (ll i = 0; i < 3; i++)
        {
            if (a[i] > 0)
            {
                ans++;
                a[i]--;
            }
        }

        if (a[0] > 0 && a[1] > 0)
        {
            ans++;
            a[0]--;
            a[1]--;
        }
        if (a[1] > 0 && a[2] > 0)
        {
            ans++;
            a[1]--;
            a[2]--;
        }
        if (a[0] > 0 && a[2] > 0)
        {
            ans++;
            a[0]--;
            a[2]--;
        }
        if (a[0] > 0 && a[1] > 0 && a[2] > 0)
            ans++;

        cout << ans << endl;
    }

    return 0;
}