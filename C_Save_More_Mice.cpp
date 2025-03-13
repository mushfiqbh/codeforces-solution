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
        vector<ll> v;
        ll n, k, cnt = 0, cat = 0;
        cin >> n >> k;
        for (ll i = 0; i < k; i++)
        {
            ll num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        while (cat < v[k - 1])
        {
            cat += (n - v[k - 1]);
            cnt++;
            v.erase(v.end() - 1);
            k--;
            if (k == 0 || v.empty())
                break;
        }
        cout << cnt << endl;
    }

    return 0;
}