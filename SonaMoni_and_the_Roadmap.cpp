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
    int t;
    cin >> t;
    while (t--)
    {
        string txt;
        cin >> txt;

        string ans = "";
        
        for (int i = txt.size() - 1; i >= 0; i--)
        {
            if (txt[i] == 'S')
                ans += 'S';
            else if (txt[i] == 'L')
                ans += 'R';
            else if (txt[i] == 'R')
                ans += 'L';
            else if (txt[i] == 'B')
                ans += 'B';
        }
        cout << ans << endl;
    }

    return 0;
}
