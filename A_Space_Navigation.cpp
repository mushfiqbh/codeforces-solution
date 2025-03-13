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
        int x, y;
        cin >> x >> y;
        string st;
        cin >> st;

        map<char, int> mp;

        for (int i = 0; i < st.size(); i++)
        {
            mp[st[i]]++;
        }

        if (x > 0 && mp['R'] < abs(x))
        {
            cout << "NO" << endl;
        }
        else if (x < 0 && mp['L'] < abs(x))
        {
            cout << "NO" << endl;
        }
        else if (y > 0 && mp['U'] < abs(y))
        {
            cout << "NO" << endl;
        }
        else if (y < 0 && mp['D'] < abs(y))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}