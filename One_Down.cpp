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

bool can_transform(const string &S, const string &T)
{
    int cS = 0, cT = 0;
    for (char ch : S)
        if (ch == '1')
            cS++;
    for (char ch : T)
        if (ch == '1')
            cT++;

    for (size_t i = 0; i < S.size(); ++i)
    {
        if (T[i] == '1' && S[i] == '0')
            return false;
    }

    return (cS - cT) % 2 == 0;
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
        string S, Tgt;
        cin >> S >> Tgt;
        cout << (can_transform(S, Tgt) ? "Yes" : "No") << endl;
    }

    return 0;
}