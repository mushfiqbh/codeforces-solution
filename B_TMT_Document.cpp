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

bool checker(string &s)
{
    bool ok = true;
    int m = 0, cnt = 0;

    for (auto c : s)
    {
        if (c == 'M')
        {
            m++;
            if (m > cnt)
            {
                ok = false;
                break;
            }
        }
        else
        {
            cnt++;
        }
    }

    return ok;
}

int main()
{
    fastIO();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool ok = true;

        int total = 0;
        for (auto c : s)
            if (c == 'M')
                ++total;
        ok = checker(s);

        if (ok)
        {
            reverse(s.begin(), s.end());
            ok = checker(s);
        }

        if ((n / 3) != total)
        {
            ok = false;
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}
