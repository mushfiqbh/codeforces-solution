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
    cin >> n; // 7

    if ((n * (n + 1) / 2) % 2 == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;

        ll target = n * (n + 1) / 2 / 2; // 14
        ll sum = 0;
        ll i = n; // i=7
        unordered_set<ll> s;
        s.reserve(n); // s-capacity 7
        while (sum < target)
        {
            s.insert(i); // 7,6,5
            sum += i;    // 7+6 = 13+5 = 18 > 14
            i--;         // 4
        }

        // if sum == target: ended
        // if sum > target:
        if (sum > target)
        {
            sum -= (i + 1); // 18 - 5 = 13 (t = 14)
            // assert(sum < target);
            s.erase(s.find(i + 1)); // remvoe 5 from s
            // sum = 13+2 (7,6,1)
            s.insert(target - sum); // 14 - 13 = 1
        }

        // 7, 6, 1 = 14 -> s
        // 5, 4, 3, 2 = 14

        cout << s.size() << "\n";
        for (auto element : s)
        {
            cout << element << " "; // 1, 6, 7
        }
        cout << "\n";

        cout << n - s.size() << "\n";
        for (int j = 1; j <= n; j++) // 1...n
        {
            if (s.find(j) == s.end()) // remaining elements in 1 to n which are not in s
            {
                cout << j << " "; // 2, 3, 4, 5
            }
        }
        cout << "\n";
    }

    return 0;
}