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

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int i = 0;
        int dif;
        while (true)
        {
            i++;
            dif = abs(n - (i * (i - 1) + 1));
            if (dif < i)
            {
                break;
            }
        }
        dif = n - (i * (i - 1) + 1);
        
        if (dif > 0)
        {
            cout << i << " " << (i - dif) << endl;
            continue;
        }
        cout << (i + dif) << " " << i << endl;
    }

    return 0;
}