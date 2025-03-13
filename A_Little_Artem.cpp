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
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == m - 1)
                {
                    if (i == 0)
                    {
                        cout << 'B';
                    }
                    else if (n % 2 == 0)
                    {
                        if (i % 2 == 0)
                        {
                            cout << 'W';
                        }
                        else
                        {
                            cout << 'B';
                        }
                    }
                    else
                    {
                        if (i % 2 == 0)
                        {
                            cout << 'B';
                        }
                        else
                        {
                            cout << 'W';
                        }
                    }
                }
                else if (n % 2 == 0)
                {
                    if (j % 2 == 0)
                    {
                        cout << 'B';
                    }
                    else
                    {
                        cout << 'W';
                    }
                }
                else
                {
                    if (j % 2 == 0)
                    {
                        cout << 'W';
                    }
                    else
                    {
                        cout << 'B';
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}