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
        string s;
        cin >> s;
        ll right = 0;
        
        if ((s.length() >= 5))
            right = 1;
        ll one = 0, two = 0, three = 0;

        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                one = 1;
            if (s[i] >= 'a' && s[i] <= 'z')
                two = 1;
            if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
                three = 1;
        }

        if ((one + two + three + right) == 4)
        {
            cout << "Correct" << endl;
        }
        else
            cout << "Too weak" << endl;
    }

    return 0;
}