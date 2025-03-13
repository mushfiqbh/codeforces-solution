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
        ll k;
        cin >> k;
        vector<ll> a(k);
        map<ll, ll> m;
        for (auto &i : a)
        {
            cin >> i;
            ++m[i];
        }
        ll v = k - 2;
        for (ll i = 1; i * i <= v; ++i)
        {
            if (v % i == 0)
            {
                ll vv = v / i;
                if (i != vv)
                {
                    if (m[i] && m[vv])
                    {
                        cout << i << ' ' << vv << endl;
                        break;
                    }
                }
                else
                {
                    if (m[i] >= 2)
                    {
                        cout << i << ' ' << vv << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
