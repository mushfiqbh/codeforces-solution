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
        int x1, y1, x2, y2, xf, yf;
        cin >> x1 >> y1 >> x2 >> y2 >> xf >> yf;

        int ans = abs(x1 - x2) + abs(y1 - y2);
        
        if (x1 == x2 && x1 == xf && yf > min(y1, y2) && yf < max(y1, y2))
        {
            ans += 2;
        }
        if (y1 == y2 && y1 == yf && xf > min(x1, x2) && xf < max(x1, x2))
        {
            ans += 2;
        }
        cout << ans << endl;
    }

    return 0;
}