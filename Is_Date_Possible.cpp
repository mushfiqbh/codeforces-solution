// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        vector<bool> arr_f(4, false);
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (x < 4)
            {
                arr_f[x] = true;
            }
        }

        vector<bool> arr_s(n, false);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr_s[x] = true;
        }

        int suma = count(arr_f.begin(), arr_f.end(), 1);
        int sumb = count(arr_s.begin(), arr_s.end(), 1);

        cout << (suma == 4 && sumb == 10 ? "YES" : "NO") << endl;
    }

    return 0;
}