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

        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            if (n % 7 > n)
            {
                cout << n + (7 - (n % 7)) << endl;
            }
            else
            {
                cout << n - (n % 7) << endl;
            }
        }
    }

    return 0;
}