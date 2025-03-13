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

    int n, l, r, x;
    cin >> n >> l >> r >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int prob = 0, difi = 0, minn = 1e6 + 9, maxx = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                prob++;
                difi += arr[i];
                minn = min(minn, arr[i]);
                maxx = max(maxx, arr[i]);
            }
        }
        if (prob >= 2 and difi >= l and difi <= r and abs(minn - maxx) >= x)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}