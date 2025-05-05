// // Author: Mushfiq R.
// #include <bits/stdc++.h>
// #define endl "\n"
// #define ll long long
// #define ld long double
// #define ull unsigned long long
// #define vsort(v) sort(v.begin(), v.end())
// #define rsort(v) sort(v.begin(), v.end(), greater<int>())
// #define fastIO (ios_base::sync_with_stdio(false), cin.tie(NULL));
// using namespace std;

// int main()
// {
//     fastIO;
//     int t;
//     cin >> t;
//     cin.ignore();

//     while (t--)
//     {
//         string fullname;
//         getline(cin, fullname);

//         for (int i = 0; i < fullname.length(); i++)
//         {
//             if (i == 0)
//             {
//                 cout << fullname[i];
//             }
//             else if (fullname[i] == ' ' && i + 1 < fullname.length())
//             {
//                 cout << fullname[i + 1];
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // Author: Mushfiq R.
// #include <bits/stdc++.h>
// #define endl "\n"
// #define ll long long
// #define ld long double
// #define ull unsigned long long
// #define vsort(v) sort(v.begin(), v.end())
// #define rsort(v) sort(v.begin(), v.end(), greater<int>())
// #define fastIO (ios_base::sync_with_stdio(false), cin.tie(NULL));
// using namespace std;

// int main()
// {
//     fastIO;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m, l, r;
//         cin >> n >> m >> l >> r;

//         int prime = -l;
//         if (m < prime)
//         {
//             prime = m;
//         }

//         cout << -prime << " " << m - prime << endl;
//     }

//     return 0;
// }

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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> grid(n, vector<int>(n));
        for (auto &row : grid)
        {
            for (auto &val : row)
            {
                cin >> val;
            }
        }

        int sz = (2 * n) + 1;
        vector<int> output(sz);
        vector<bool> filled(sz, false);

        for (int i = 2; i < sz; ++i)
        {
            if (i > n + 1)
            {
                output[i] = grid[i - n - 1][n - 1];
            }
            else
            {
                output[i] = grid[0][i - 2];
            }
            filled[output[i]] = true;
        }

        for (int i = 1; i < sz; ++i)
        {
            if (!filled[i])
            {
                output[1] = i;
                break;
            }
        }

        for (int i = 1; i < sz; ++i)
        {
            cout << output[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
