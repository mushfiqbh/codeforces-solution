// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

// Recursive sorting with k swaps
void Sort(int l, int r, vector<int> &a, int &k) {
    if (k == 0 || l >= r - 1) 
        return;

    int mid = (l + r) / 2;
    swap(a[mid - 1], a[mid]);
    k--;  // Decrease the remaining swaps

    Sort(l, mid, a, k);  // Sort left half
    Sort(mid, r, a, k);  // Sort right half
}

int main() {
    fastIO();

    int n, k;
    cin >> n >> k;

    // If k is even, output -1 as it's impossible to achieve the condition
    if (k % 2 == 0) {
        cout << -1 << endl;
        return 0;
    }

    k /= 2;  // Effective swaps needed
    vector<int> a(n);

    // Initialize the array with values 1 to n
    iota(a.begin(), a.end(), 1);

    // Perform the recursive sorting
    Sort(0, n, a, k);

    // If k swaps remain, it means the condition wasn't met
    if (k > 0) {
        cout << -1 << endl;
    } else {
        // Output the modified array
        for (int x : a) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
