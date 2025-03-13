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
    int dist, t;
    cin >> dist >> t;
    while (t--)
    {
        int limit;
        cin >> limit;

        int time = 0, speedup = 0, slowdown = 0;
        for (int speed = 1;; speed++)
        {
            time++;
            speedup += speed;

            if (speedup + slowdown >= dist)
            {
                cout << time << endl;
                break;
            }

            if (speed >= limit)
            {
                slowdown += speed;
                time++;
                if (speedup + slowdown >= dist)
                {
                    cout << time << endl;
                    break;
                }
            }
        }
    }

    return 0;
}