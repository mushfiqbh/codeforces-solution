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
    int n, k, x, a, b, c;
    cin >> n >> k;
    cin >> x >> a >> b >> c;

    vector<int> arr(n);
    arr[0] = x;

    for (int i = 1; i < n; i++)
    {
        arr[i] = (a * arr[i - 1] + b) % c;
    }
    
    set<int> window;

    for (int i = 0; i < k; i++)
    {
        window.insert(arr[i]);
    }

    int ab = *window.begin();

    for (int i = k; i < n; i++)
    {
        window.erase(arr[i-k]);
        window.insert(arr[k]);
        ab ^= *window.begin();
    }

    cout << ab;

    return 0;
}