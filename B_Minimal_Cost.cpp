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

ll arr[101];
ll n, u, p;

ll calculate(ll i)
{

    if (arr[i] == arr[i - 1])
    {
        return p + min(u, p);
    }
    else if (abs(arr[i - 1] - arr[i]) >= 2)
    {
        return 0;
    }
    else
    {
        return min(u, p);
    }
}

int main()
{
    fastIO();
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> u >> p;
        ll ans = INT_MAX;

        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (ll i = 2; i <= n; i++)
        {

            ans = min(calculate(i), ans);
        }

        cout << ans << endl;
    }

    return 0;
}