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
const int MAX = 20001;

int main()
{
    fastIO();
    map<int, bitset<MAX>> mp;
    int t = 1;
    cin >> t;
    while (t--)
    {
        char ch;
        int x, y;
        cin >> ch >> x >> y;

        if (ch == '+')
        {
            mp[x].set(y);
        }
        else if (ch == '-')
        {
            mp[x].reset(y);
        }
        else if (ch == 'v')
        {
            int count = 0;
            for (int i = 0; i < MAX; i++)
            {
                if (mp[x][i] || mp[y][i])
                {
                    count++;
                }
            }
            cout << count << endl;
        }
        else if (ch == '^')
        {
            int count = 0;
            for (int i = 0; i < MAX; i++)
            {
                if (mp[x][i] && mp[y][i])
                {
                    count++;
                }
            }
            cout << count << endl;
        }
        else if (ch == '!')
        {
            int count = 0;
            for (int i = 0; i < MAX; i++)
            {
                if ((mp[x][i] && !mp[y][i]) || (!mp[x][i] && mp[y][i]))
                {
                    count++;
                }
            }
            cout << count << endl;
        }
        else if (ch == '\\')
        {
            int count = 0;
            for (int i = 0; i < MAX; i++)
            {
                if (mp[x][i] && !mp[y][i])
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}