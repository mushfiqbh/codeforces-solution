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
        int a, b, c;
        cin >> a >> b >> c;

        int limit = 2 * abs(a - b);

        if (a > limit || b > limit || c > limit)
        {
            cout << -1 << endl;
        }
        else
        {
            int oppo = (c + abs(a - b)) % limit;

            cout << (oppo == 0 ? limit : oppo) << endl;
        }
    }

    return 0;
}