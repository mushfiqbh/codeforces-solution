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
        ll l, r;
        cin >> l >> r;

        for (ll i = 0; i < 64; i++)
        {
            ll num = pow(2, i);
            if ((l | num) <= r)
            {
                l |= num;
            }
            else
            {
                break;
            }
        }

        cout << l << endl;
    }
    return 0;
}