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

int binomial_coef(int a, int b)
{
    if(a == b || b == 0)
    {
        return 1;
    }

    return binomial_coef(a-1, b-1) + binomial_coef(a-1, b);
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << binomial_coef(a, b) << endl; // aCb : combination
    }

    return 0;
}