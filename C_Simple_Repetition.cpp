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

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        ll x, k;
        cin >> x >> k;

        if (x == 1 && k == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (x == 1)
        {
            if (k <= 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        if (k > 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << (isPrime(x) ? (k == 1 ? "YES" : "NO") : "NO") << endl;
    }

    return 0;
}