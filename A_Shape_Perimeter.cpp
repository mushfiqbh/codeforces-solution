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
        int n, m;
        cin >> n >> m;

        int ans = 4 * m * n;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;

            if (i == 0)
            {
                continue;
            }
            ans -= 2 * (m - x + m - y);
        }

        cout << ans << endl;
    }

    return 0;
}