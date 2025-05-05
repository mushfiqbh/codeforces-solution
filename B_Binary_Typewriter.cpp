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

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int maxConsecutive(const string &s, char ch)
{
    int maxLen = 0, currLen = 0;
    for (char c : s)
    {
        if (c == ch)
            currLen++;
        else
            currLen = 0;
        maxLen = max(maxLen, currLen);
    }
    return maxLen;
}

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string bits;
        cin >> bits;

        int operation = 0;

        char initial = '0';

        string best = bits;
        int bestLen = max(maxConsecutive(bits, '0'), maxConsecutive(bits, '1'));

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                string temp = bits;
                reverse(temp.begin() + i, temp.begin() + j + 1);
                int currLen = max(maxConsecutive(temp, '0'), maxConsecutive(temp, '1'));
                if (currLen > bestLen)
                {
                    bestLen = currLen;
                    best = temp;
                }
            }
        }

        cout << best;
        for (int i = 0; i < n; i++)
        {
            if (best[i] == initial)
            {
                operation++;
            }
            else
            {
                cout << "_" << best[i]<< endl;
                initial = best[i];
                operation += 2;
            }
        }

        cout << operation << endl;
    }

    return 0;
}
