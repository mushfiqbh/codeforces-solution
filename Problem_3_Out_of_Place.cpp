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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> sorted_arr(arr);
    vsort(sorted_arr);

    int swaps = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != sorted_arr[i])
        {
            swaps++;
        }
    }

    cout << swaps - 1;

    return 0;
}