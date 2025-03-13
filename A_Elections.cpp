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
        ll a, b, c;
        cin >> a >> b >> c;
        ll mx = max({a, b, c});

        if (a == b && b == c)
            a = 1, b = 1, c = 1;
        else if (a == mx && b == mx)
            a = 1, b = 1, c = (mx - c + 1);
        else if (b == mx && c == mx)
            b = 1, c = 1, a = (mx - a + 1);
        else if (a == mx && c == mx)
            a = 1, c = 1, b = (mx - b + 1);
        else if (mx == a)
            a = 0, b = (mx - b + 1), c = (mx - c + 1);
        else if (mx == b)
            b = 0, a = (mx - a + 1), c = (mx - c + 1);
        else if (mx == c)
            c = 0, a = (mx - a + 1), b = (mx - b + 1);
        
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}