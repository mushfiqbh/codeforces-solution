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

bool allSame(const vector<int> &arr)
{
    return set<int>(arr.begin(), arr.end()).size() == 1;
}

bool hasDistinct(const vector<int> &arr)
{
    set<int> uniques(arr.begin(), arr.end());
    return uniques.size() <= 2;
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arrf(n), arrs(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arrf[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arrs[i];
        }

        bool p1 = allSame(arrs) && hasDistinct(arrf);
        bool p2 = allSame(arrf) && hasDistinct(arrs);

        if (p1 || p2)
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