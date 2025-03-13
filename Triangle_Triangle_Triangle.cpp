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
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && b == c)
        {
            cout << "Equilateral";
        }
        else if (a == b || b == c || a==c)
        {
            cout << "Isosceles";
        }
        else
        {
            cout << "Scalene";
        }
    }
    else
    {
        cout << "Not a triangle";
    }

    return 0;
}