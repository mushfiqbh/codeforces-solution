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
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, moves = 0;
        cin >> n;

        bool multiplied = false;

        while(n != 1){
            if(n % 6 == 0){
                n /= 6;
                moves++;
                multiplied = false;
            }else if(!multiplied){
                n *= 2;
                moves++;
                multiplied = true;
            }else{
                cout << -1 << endl;
                goto end;
            }
        }

        cout << moves << endl;
        end:;
    }

    return 0;
}