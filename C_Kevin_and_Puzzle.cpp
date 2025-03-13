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

const int MOD = 998244353;

int main()
{
    fastIO();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<vector<int>> dp(n + 1, vector<int>(2, 0));
        dp[0][0] = 1;

        for (int i = 0; i < n; i++)
        {
            vector<vector<int>> new_dp(n + 1, vector<int>(2, 0));

            for (int liars = 0; liars <= i; liars++)
            {
                for (int prev = 0; prev < 2; prev++)
                {
                    if (dp[liars][prev] == 0)
                        continue;

                    if (liars == a[i])
                    {
                        new_dp[liars][0] = (new_dp[liars][0] + dp[liars][prev]) % MOD;
                    }

                    if (prev == 0)
                    {
                        new_dp[liars + 1][1] = (new_dp[liars + 1][1] + dp[liars][prev]) % MOD;
                    }
                }
            }

            dp = new_dp;
        }

        int result = 0;
        for (int liars = 0; liars <= n; liars++)
        {
            for (int last = 0; last < 2; last++)
            {
                result = (result + dp[liars][last]) % MOD;
            }
        }

        cout << result << endl;
    }

    return 0;
}