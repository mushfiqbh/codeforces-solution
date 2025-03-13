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

int findMex(unordered_set<int> &uset, int maxElement)
{
    for (int mex = 0; mex <= maxElement + 1; ++mex)
    {
        if (uset.find(mex) == uset.end())
            return mex;
    }
    return 0; // This should never occur unless input is invalid.
}

int main()
{
    fastIO();
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_set<int> window;   // Keeps track of elements in the current window.
    unordered_map<int, int> freq; // Frequency map to optimize removal.

    // Initialize the first window.
    for (int i = 0; i < m; i++)
    {
        window.insert(arr[i]);
        freq[arr[i]]++;
    }

    int minmex = findMex(window, *max_element(arr.begin(), arr.end()));

    // Sliding window.
    for (int i = m; i < n; i++)
    {
        // Remove the element going out of the window.
        freq[arr[i - m]]--;
        if (freq[arr[i - m]] == 0)
        {
            window.erase(arr[i - m]);
        }

        // Add the new element into the window.
        window.insert(arr[i]);
        freq[arr[i]]++;

        // Update the minimum MEX.
        minmex = min(minmex, findMex(window, *max_element(arr.begin(), arr.end())));
    }

    cout << minmex << endl;

    return 0;
}
