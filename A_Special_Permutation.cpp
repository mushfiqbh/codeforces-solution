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
        for (int i = n; i > 0; i--)
        {
            if (i == (n + 1) / 2)
            {
                cout << 1 << " ";
            }
            else if (i == 1)
            {
                cout << (n + 1) / 2 << " ";
            }
            else
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}