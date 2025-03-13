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
        int a, b, c;
        cin >> a >> b >> c;

        bool res = false;

        if (a == b + c || b == a + c || c == a + b)
        {
            res = true;
        }
        if ((a % 2 == 0 && b == c) || (b % 2 == 0 && a == c) || (c % 2 == 0 && a == b))
        {
            res = true;
        }

        cout << (res ? "YES" : "NO") << endl;
    }

    return 0;
}