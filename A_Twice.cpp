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
        int n;
        cin >> n;

        vector<int> a(n);
        map<int, int> m;

        for (auto &i : a)
        {
            cin >> i;
            ++m[i];
        }
        int ans = 0;
        for (auto &kv : m)
        {
            int k = kv.first;
            int v = kv.second;
            ans += v / 2;
        }
        cout << ans << endl;
    }

    return 0;
}