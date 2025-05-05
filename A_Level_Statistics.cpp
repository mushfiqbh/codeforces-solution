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
        int n;
        cin >> n;
        int p, c;
        p = c = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (!ok)
                continue;
            if (x < p || y < c || x < y || (x - p) < (y - c))
            {
                ok = false;
            }
            p = x;
            c = y;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}