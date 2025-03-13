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
    int n;
    string s1, s2;
    cin >> n;
    cin >> s1;
    cin >> s2;

    int count = 0;
    bool mismatch = false;

    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i] && !mismatch)
        {
            count++;
            mismatch = true;
        }
        else
        {
            mismatch = false;
        }
    }

    cout << count;

    return 0;
}