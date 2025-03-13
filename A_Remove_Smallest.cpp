// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(vec) sort(vec.begin(), vec.end())
#define rsort(vec) sort(vec.begin(), vec.end(), greater<int>())
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, arr[55];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        sort(arr, arr + n);
        vector<int> vec;
        int diff = 0;
        for (int i = 1; i < n; i++)
        {
            diff = abs(arr[i] - arr[i - 1]);
            vec.push_back(diff);
        }

        rsort(vec);
        cout << (vec[0] > 1 ? "NO" : "YES") << endl;
    }

    return 0;
}