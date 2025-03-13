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

const long N = 3e5 + 10;
ll arr[N];

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, ans, sum = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % n)
    {
        cout << -1 << "\n";
        continue;
    }
    ll eq = sum / n;
    ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (arr[i] > eq)
        {
            ans++;
        }
    }
    cout << ans << "\n";
    }

    return 0;
}