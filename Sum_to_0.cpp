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
        int N;
        cin >> N;

        vector<int> res;
        if (N == 1)
        {
            cout << -1 << endl;
            continue;
            ;
        }

        if (N % 2 == 0)
        {
            for (int i = 0; i < N / 2; ++i)
            {
                res.push_back(1);
                res.push_back(-1);
            }
        }
        else
        {
            for (int i = 0; i < (N - 3) / 2; ++i)
            {
                res.push_back(1);
                res.push_back(-1);
            }
            res.push_back(1);
            res.push_back(2);
            res.push_back(-3);
        }

        for (int x : res)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}