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
        int h[n];
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            if (h[i] % 2)
                odd.push_back(h[i]);
            else
                even.push_back(h[i]);
        }
        for (auto i : odd)
        {
            cout << i << " ";
        }
        for (auto i : even)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}