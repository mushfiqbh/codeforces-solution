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
        int n, even = 0, odd = 0, diff = 0;
        cin >> n;

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            arr.push_back(x);
        }

        vsort(arr);

        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i - 1]) == 1)
            {
                diff++;
            }
        }

        if (even % 2 == 0 && odd % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (even % 2 == 1 && odd % 2 == 1)
        {
            if (diff >= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}