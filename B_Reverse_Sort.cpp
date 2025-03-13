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
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll left(0);
        while (left < s.size() && s[left] == '0')
        {
            ++left;
        }
        ll right(s.size() - 1);
        while (right >= 0 && s[right] == '1')
        {
            --right;
        }

        vector<ll> v;
        while (left < right)
        {
            v.push_back(left);
            ++left;
            v.push_back(right);
            --right;
            while (left < s.size() && s[left] == '0')
            {
                ++left;
            }
            while (right >= 0 && s[right] == '1')
            {
                --right;
            }
        }

        if (v.size() > 0)
        {
            sort(v.begin(), v.end());
            cout << "1" << "\n"
                 << v.size();
            for (ll p = 0; p < v.size(); p++)
            {
                cout << " " << (1 + v[p]);
            }
            cout << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}