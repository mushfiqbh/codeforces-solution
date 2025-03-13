
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

ll sum(ll n)
{
    ll s = 0;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    fastIO();
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        while (true)
        {
            if (__gcd(n, sum(n)) > 1)
            {
                cout << n << endl;
                break;
            }
            n++;
        }
    }

    return 0;
}