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
    int n;
    cin >> n;
    vector<int> pfx(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pfx[i] = pfx[i - 1] + x;
    }

    int maxsum = pfx[1];
    int minsum = pfx[0];
    for (int i = 1; i <= n; i++)
    {
        maxsum = max(maxsum, pfx[i] - minsum);
        minsum = min(minsum, pfx[i]);
    }

    cout << maxsum;

    return 0;
}