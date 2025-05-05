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

bool isPossibleMatch(const string &p, const string &s)
{
    int pi = 0, si = 0;

    while (pi < p.length() && si < s.length())
    {
        int pCount = 0;
        while (pi + pCount < p.length() && p[pi + pCount] == p[pi])
        {
            pCount++;
        }

        int sCount = 0;
        while (si + sCount < s.length() && s[si + sCount] == p[pi])
        {
            sCount++;
        }

        if (sCount < pCount || sCount > 2 * pCount)
        {
            return false;
        }

        si += sCount;
        pi += pCount;
    }

    return si == s.length() && pi == p.length();
}

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;

        cout << (isPossibleMatch(p, s) ? "YES" : "NO") << endl;
    }

    return 0;
}
