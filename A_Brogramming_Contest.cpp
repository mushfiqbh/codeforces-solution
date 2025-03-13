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
        string st;
        cin >> st;

        int count = 0;

        if(st[0] == '1'){
            count++;
        }

        for (int i = 1; i < n; i++)
        {
            if(st[i] != st[i-1]){
                count++;
            }
        }
        
        cout << count << endl;
    }

    return 0;
}