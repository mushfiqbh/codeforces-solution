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
        string s;
        cin >> s;
        long cnt(0);
        for (long p = 0; p < s.size(); p++)
        {
            cnt += s[p] == 'N';
        }
        cout << (cnt != 1 ? "YES" : "NO") << endl;
    }

    return 0;
}