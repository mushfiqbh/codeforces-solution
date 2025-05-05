// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define fastIO (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> prefixMax(n);
        prefixMax[0] = arr[0];
        for (ll i = 1; i < n; i++)
        {
            prefixMax[i] = max(prefixMax[i - 1], arr[i]);
        }

        vector<ll> suffixSum(n + 1, 0);
        for (ll i = n - 1; i >= 0; i--)
        {
            suffixSum[i] = suffixSum[i + 1] + arr[i];
        }

        for (ll k = 1; k <= n; k++)
        {
            ll mx = prefixMax[n - k];
            ll sum = mx + suffixSum[n - k + 1];
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}
