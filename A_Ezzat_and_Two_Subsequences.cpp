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
        int a[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            sum += a[i];
        }

        sort(a, a + n);
        double x = a[n - 1];
        sum = sum - x;
        double y = (double)sum / (double)(n - 1);

        cout << fixed << setprecision(9) << (x + y) << endl;
    }


    return 0;
}