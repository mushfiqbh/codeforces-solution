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
        ll n, m, I, J;
        cin >> n >> m >> I >> J;
        if (I != 1 && I != n && J != 1 && J != m)
        {
            cout << 1 << " " << 1 << " " << n << " " << m;
        }
        else if (I == 1 || I == n)
        {
            cout << n - I + 1 << " " << 1 << " " << n - I + 1 << " " << m;
        }
        else if (J == 1 || J == m)
        {
            cout << 1 << " " << m - J + 1 << " " << n << " " << m - J + 1;
        }
        cout << endl;
    }

    return 0;
}
