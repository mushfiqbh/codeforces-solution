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
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
        }

        ll remaining = sum % n;
        cout << (remaining * 1LL * (n - remaining)) << endl;
    }

    return 0;
}