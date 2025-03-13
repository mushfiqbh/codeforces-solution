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
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        int sum = p1 + p2 + p3;

        if (sum % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << min(sum / 2, p1 + p2) << endl;
        }
    }

    return 0;
}