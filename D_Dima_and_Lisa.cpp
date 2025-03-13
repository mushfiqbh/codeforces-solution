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

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    fastIO();
    ll n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1 << endl;
        cout << n << endl;
        return 0;
    }

    cout << 3 << endl;
    cout << 3 << " ";
    n -= 3;

    for (ll i = 3; i < n - 1; i += 2)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            cout << i << " " << n - i << " " << endl;
            break;
        }
    }

    return 0;
}