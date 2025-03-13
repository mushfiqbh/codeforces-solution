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

void calculate_the_maximum(int n, int k)
{
    int a = 0, o = 0, x = 0, calc;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            calc = i & j;
            if (calc < k)
            {
                a = max(a, calc);
            }

            calc = i | j;
            if (calc < k)
            {
                o = max(o, calc);
            }

            calc = i ^ j;
            if (calc < k)
            {
                x = max(x, calc);
            }
        }
    }

    printf("%d\n%d\n%d", a, o, x);
}

int main()
{
    fastIO();
    int n, k;
    cin >> n >> k;

    calculate_the_maximum(n, k);

    return 0;
}