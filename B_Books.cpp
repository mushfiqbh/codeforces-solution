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
    int n, t;
    cin >> n >> t;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = 0, curr = 0, ans = 0;
    while(left < n && right < n)
    {
        while(right < n)
        {
            curr += arr[right++];

            if(curr > t)
            {
                curr -= arr[--right];
                break;
            }
        }

        ans = max(ans, right - left);
        curr -= arr[left++];
    }

    cout << ans << endl;

    return 0;
}