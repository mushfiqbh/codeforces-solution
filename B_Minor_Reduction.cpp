/**
 * Author:  Mushfiq R.
 */
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
        string s;
        cin >> s;
        int n = s.size();
        int max = (s[0] - '0') + (s[1] - '0');
        int i = 0, j = 1;
        for (int k = 0; k < n - 1; k++)
        {
            int num = (s[k] - '0') + (s[k + 1] - '0');
            if (num > 10)
            {
                max = num;
                i = k;
            }
        }
        for (int k = 0; k < n; k++)
        {
            if (k == i)
            {
                cout << max;
                k++;
                continue;
            }
            cout << s[k];
        }
        cout << endl;
    }

    return 0;
}