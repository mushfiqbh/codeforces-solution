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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].second;
        }

        vsort(arr);

        for (int i = 0; i < n; i++)
        {
            if (arr[i].first > k)
            {
                break;
            }

            k += arr[i].second;
        }

        cout << k << endl;
    }

    return 0;
}
