// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define fastIO (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

const int MOD = 998244353;

int countOrders(int n, const vector<int> &arr)
{
    vector<int> freq(n, 0);
    for (int x : arr)
    {
        freq[x]++;
    }

    int ans = 1;

    for (int i = 1; i <= n / 2; ++i)
    {
        int c = freq[i - 1] + freq[n - i];
        if (c > 2)
            return 0;
        if (c >= 1)
        {
            ans = (1LL * ans * 2) % MOD;
        }
    }

    if (n % 2 == 1)
    {
        int mid = (n - 1) / 2;
        if (freq[mid] > 1)
            return 0;
    }

    return ans;
}

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        cout << countOrders(n, arr) << endl;
    }

    return 0;
}
