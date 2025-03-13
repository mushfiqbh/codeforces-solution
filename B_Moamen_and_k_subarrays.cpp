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
        int n, k;
        cin >> n >> k;
        vector<int> values(n), indices(n), targets(n);

        for (int i = 0; i < n; i++)
        {
            indices[i] = i;
            cin >> values[i];
        }

        vector<int> sorted_indices(n);
        iota(sorted_indices.begin(), sorted_indices.end(), 0);
        sort(sorted_indices.begin(), sorted_indices.end(), [&](int a, int b)
             { return values[a] < values[b]; });

        for (int i = 0; i < n; i++)
        {
            targets[sorted_indices[i]] = i;
        }

        int require = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (targets[i] + 1 != targets[i + 1])
            {
                require++;
            }
        }

        cout << (require <= k ? "Yes" : "No") << endl;
    }
    return 0;
}