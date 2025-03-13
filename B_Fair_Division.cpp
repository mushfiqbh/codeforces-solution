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

        int sum = 0, one = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 1)
            {
                one++;
                sum++;
            }
            else
            {
                sum += 2;
            }
        }

        if (sum % 2 == 0 && ((sum / 2) % 2 == 0 || one))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}