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
        int n;
        cin >> n;

        map<int, int> mp;

        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                zero++;
                continue;
            }
            mp[abs(x)]++;
        }

        int cnt = (zero > 0);
        for (auto &i : mp)
        {
            cnt += min(2, (i.second + 2) / 2);
        }

        cout << cnt << '\n';
    }

    return 0;
}