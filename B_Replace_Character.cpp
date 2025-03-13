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
        int n;
        cin >> n;
        string txt;
        cin >> txt;

        map<char, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[txt[i]]++;
        }

        char low, high;
        int mxf = 0, mnf = INT_MAX;

        for (auto &item : freq)
        {
            if (item.second >= mxf)
            {
                mxf = item.second;
                low = item.first;
            }
            if (item.second < mnf)
            {
                mnf = item.second;
                high = item.first;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (txt[i] == high)
            {
                txt[i] = low;
                break;
            }
        }

        cout << txt << endl;
    }

    return 0;
}