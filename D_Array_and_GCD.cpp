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

const int MAX_A = 1e6 + 5;

int main()
{
    fastIO;
    int t;
    cin >> t;
    vector<int> freq(MAX_A);
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int max_val = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            freq[a[i]]++;
            max_val = max(max_val, a[i]);
        }

        // Count multiples
        vector<int> cnt(max_val + 2);
        for (int d = 2; d <= max_val; ++d)
        {
            for (int mult = d; mult <= max_val; mult += d)
            {
                cnt[d] += freq[mult];
            }
        }

        int max_keep = 0;
        for (int d = 2; d <= max_val; ++d)
        {
            max_keep = max(max_keep, cnt[d]);
        }

        cout << (n - max_keep) << "\n";

        // Reset frequency for the next test case
        for (int i = 0; i < n; ++i)
        {
            freq[a[i]] = 0;
        }
    }

    return 0;
}
