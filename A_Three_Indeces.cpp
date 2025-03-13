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
        int x, y, z;
        x = y = z = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] < arr[i])
            {
                if (arr[i] > arr[i + 1])
                {
                    x = i;
                    y = i + 1;
                    z = i + 2;
                    break;
                }
            }
        }
        if ((x != y && y != z) && (x != -1))
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
