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
        ll n;
        string s;
        cin >> n >> s;

        ll r_od = 0, b_ev = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x = s[i] - '0';
            if ((i + 1) % 2)
                r_od += (x % 2);
            else
                b_ev += (x % 2 == 0);
        }

        cout << ((n % 2) ? (r_od ? 1 : 2) : (b_ev ? 2 : 1)) << endl;
    }
    return 0;
}
