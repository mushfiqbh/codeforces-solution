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
        int n, a, b;
        cin >> n >> a >> b;

        char c[] = "abcdefghijklmnopqrstuvwxyz";

        string s;

        for (int i = 0; i < b; i++)
        {
            s[i] = c[i];
        }

        int k = 0;
        while (n--)
        {
            cout << s[k];
            k++;
            if (k == b)
            {
                k = 0;
            }
        }

        cout << endl;
    }

    return 0;
}