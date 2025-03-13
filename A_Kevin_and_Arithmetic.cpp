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
        int n, even = 0, odd = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x % 2 == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        if (even > 0)
        {
            cout << odd + 1 << endl;
        }
        else
        {
            cout << (max(0, odd - 1)) << endl;
        }
    }

    return 0;
}