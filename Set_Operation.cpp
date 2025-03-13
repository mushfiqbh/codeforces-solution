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

const int MAX_VAL = 10001;

int main()
{
    fastIO();
    vector<bitset<MAX_VAL + 1>> v;

    int t, q;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bitset<MAX_VAL + 1> bset;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            bset[x] = 1;
        }
        v.push_back(bset);
    }

    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        bool found = false;

        for (const auto &bset : v)
        {
            if (bset[a] && bset[b])
            {
                cout << "Yes" << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "No" << endl;
    }

    return 0;
}
