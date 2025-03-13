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
    int t, n, k, p;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> p;
        if (abs(k) > n * p)
        {
            cout << "-1" << endl;
        }
        else
        {
            int ans = (p + abs(k) - 1);
            cout << ans / p << endl;
        }
    }

    return 0;
}