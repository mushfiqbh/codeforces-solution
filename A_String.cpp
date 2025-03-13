// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<ll>())
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}