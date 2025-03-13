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

string generatePattern(int n)
{
    char letter = 'A' + (n - 1);

    if (n == 1)
    {
        string l;
        l += letter;
        return l;
    }

    string bound = generatePattern(n - 1);

    return bound + letter + bound;
}

int main()
{
    fastIO();
    int n;
    cin >> n;

    cout << generatePattern(n);

    return 0;
}