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
        vector<int> arr(n);

        map<int, int> freq;
        vector<int> duplicates;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            arr[i] = num;
            freq[num]++;
            if (freq[num] == 2)
            {
                duplicates.push_back(num);
            }
        }

        vsort(arr);

        if (duplicates.empty())
        {
            cout << -1 << endl;
            continue;
        }

        int duplicate = duplicates[0];

        if (duplicates.size() > 1)
        {
            cout << duplicate << " " << duplicate << " "
                 << duplicates[1] << " " << duplicates[1] << endl;
            continue;
        }

        vector<int> remaining;
        int duplicate_count = 2;
        for (int num : arr)
        {
            if (num == duplicate && duplicate_count > 0)
            {
                duplicate_count--;
                continue;
            }
            remaining.push_back(num);
        }

        bool found = false;
        for (int i = 0; i < remaining.size() - 1; i++)
        {
            if (remaining[i + 1] < remaining[i] + 2 * duplicate)
            {
                cout << duplicate << " " << duplicate << " "
                     << remaining[i] << " " << remaining[i + 1] << "\n";
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}