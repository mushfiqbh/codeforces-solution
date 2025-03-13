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
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> arr(1000001, 0); // Assuming max possible `r + 1` is 10^6
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        arr[l]++;
        arr[r + 1]--;
    }

    // Apply range updates
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        count += arr[i];
        arr[i] = (count >= k) ? 1 : 0;
    }

    // Build prefix sum arra
    vector<int> p(arr.size(), 0);
    for (int i = 1; i < p.size(); i++)
    {
        p[i] = arr[i] + p[i - 1];
    }

    // Answer queries
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << p[r] - (l > 0 ? p[l - 1] : 0) << endl;
    }

    return 0;
}
