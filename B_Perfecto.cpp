// Author: Mushfiq R.
#include <bits/stdc++.h>
using namespace std;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool isPerfectSquare(long long x)
{
    long long s = sqrt(x);
    return s * s == x;
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
        if (n == 1)
        {
            cout << "-1\n";
            continue;
        }
        vector<int> output(n);
        iota(output.rbegin(), output.rend(), 1);

        for (int i = 0, j = 1; j < n; i++, j++)
        {
            if (!isPerfectSquare(output[i] + output[j]))
            {
                swap(output[i], output[j]);
            }
        }

        long long sum = 0;
        bool valid = true;
        for (int x : output)
        {
            sum += x;
            if (isPerfectSquare(sum))
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            for (int x : output)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
