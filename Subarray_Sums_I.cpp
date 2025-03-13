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
    int n, target;
    cin >> n >> target;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = -1, sum = 0, count = 0;

    while (end < n)
    {
        while (end < n && sum < target)
        {
            sum += arr[++end];
        }

        while(start <= end && sum > target)
        {
            sum -= arr[start++];
        }

        if(sum == target)
        {
            count++;
            sum -= arr[start++];
        }
    }

    cout << count << endl;

    return 0;
}