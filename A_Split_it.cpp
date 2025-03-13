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
        string s;
        cin >> n >> k >> s;
        if (k == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (2 * k == n)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < k; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                cout << "NO" << endl;
                goto end;
            }
        }
        cout << "YES" << endl;
    end:;
    }

    return 0;
}