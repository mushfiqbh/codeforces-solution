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
        ll n;
        cin >> n;

        if (n <= 6)
        {
            cout << 15 << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << (n / 2) * 5 << endl;
            }
            else
            {
                cout << ((n / 2) + 1) * 5 << endl;
            }
        }
    }

    return 0;
}