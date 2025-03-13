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
        ll n, q, l, r;
        string s;
        cin >> n >> q >> s;
        while (q--)
        {
            bool ok = false;
            cin >> l >> r;
            l--, r--;
            for (ll i = 0; i < l; i++)
            {
                if (s[i] == s[l])
                    ok = true;
            }
            for (ll i = r + 1; i < n; i++)
            {
                if (s[i] == s[r])
                    ok = true;
            }
            if (ok)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}