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
        if (n % 2050 == 0)
        {
            ll x = n / 2050;
            ll sum = (ll)0;
            while (x != 0)
            {
                sum += (ll)x % 10;
                x /= 10;
            }
            cout << sum << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}