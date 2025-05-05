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
    vector<vector<int>> arr(3, vector<int>(3));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = arr[i][j];
            if (i > 0)
                sum += arr[i - 1][j];
            if (i < 2)
                sum += arr[i + 1][j];
            if (j > 0)c:\Users\HP\Downloads\ReactProject\CF-Status\A_Three_Decks.cpp
                sum += arr[i][j - 1];
            if (j < 2)
                sum += arr[i][j + 1];
            cout << (sum + 1) % 2;
        }
        cout << endl;
    }

    return 0;
}