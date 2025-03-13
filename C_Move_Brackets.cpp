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
        int n;
        string s;
        cin >> n >> s;
        int ans = 0, open = 0, close = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' && s[i + 1] == ')')
            {
                i++;
                continue;
            }
            if (s[i] == '(')
            {
                open++;
            }
            if (s[i] == ')')
            {
                close++;
                if (open < close)
                    ans++, close--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}