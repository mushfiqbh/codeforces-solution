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
        int n, k;
        cin >> n >> k;

        vector<int> x(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            cin >> x[i];
            freq[x[i]]++;
        }

        int score = 0;

        for (const auto &numcount : freq)
        {
            int num = numcount.first;
            int count = numcount.second;
            int complement = k - num;
            if (complement == num)
            {
                score += freq[num] / 2;
            }
            else if (freq.count(complement))
            {
                int pairs = min(freq[num], freq[complement]);
                score += pairs;
                freq[num] -= pairs;
                freq[complement] -= pairs;
            }
        }

        cout << score << endl;
    }

    return 0;
}