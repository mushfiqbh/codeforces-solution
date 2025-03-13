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
        int n, score = 0;
        cin >> n;

        int zero = 0, plus = 0, minus = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 0)
                zero++;
            else if (x == 1)
                plus++;
            else if (x == -1)
                minus++;
        }

        while (plus >= 3)
        {
            score += 1;
            plus -= 3;
        }

        while (minus >= 2 && plus >= 1)
        {
            score += 1;
            minus -= 2;
            plus -= 1;
        }

        while (minus >= 3)
        {
            score -= 1;
            minus -= 3;
        }

        cout << score << endl;
    }

    return 0;
}