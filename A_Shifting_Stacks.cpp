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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        ll have = arr[0];
        arr[0] = 0;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                have += arr[i] - (arr[i - 1] + 1);
                arr[i] = arr[i - 1] + 1;
            }
            else if (arr[i] == arr[i - 1])
            {
                if (have > 0)
                {
                    arr[i]++;
                    have--;
                }
            }
            else
            {
                ll gap = arr[i - 1] - arr[i] + 1;
                if (gap <= have)
                {
                    arr[i] += gap;
                    have -= gap;
                }
            }
        }

        bool yes = true;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] <= arr[i - 1])
            {
                yes = false;
                break;
            }
        }

        cout << (yes ? "YES" : "NO") << endl;
    }

    return 0;
}