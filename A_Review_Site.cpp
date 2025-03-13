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
        int n;
        cin >> n;

        int upvotes = 0;
        int downvotes = 0;

        int up2 = 0;
        int down2 = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 1)
            {
                upvotes++;
            }
            else if (x == 2)
            {
                downvotes++;
            }
            else
            {
                if (upvotes >= downvotes)
                {
                    upvotes++;
                }
                else
                {
                    if (up2 >= down2)
                    {
                        up2++;
                        upvotes++;
                    }
                    else
                    {
                        down2++;
                    }
                }
            }
        }

        cout << upvotes << endl;
    }

    return 0;
}