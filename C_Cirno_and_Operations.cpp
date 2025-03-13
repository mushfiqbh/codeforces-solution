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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int summ = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            summ += x;
            arr[i] = x;
        }

        while (1)
        {
            if (arr.size() == 1)
            {
                if (arr[0] > summ)
                {
                    summ = arr[0];
                }
                break;
            }

            vector<int> darray;
            for (int i = 0; i < arr.size() - 1; i++)
            {
                int sub = arr[i + 1] - arr[i];
                darray.push_back(sub);
            }

            int acm = accumulate(darray.begin(), darray.end(), 0);

            // if (accumulate(darray.begin(), darray.end(), 0) < 0)
            if (acm < 0)
            {
                for (int i = 0; i < darray.size(); i++)
                {
                    darray[i] *= -1;
                    // darray[i] = -darray[i];
                }
            }

            int acma = accumulate(darray.begin(), darray.end(), 0);
            if (acm > summ)
            {
                summ = acm;
            }

            // reverse(darray.rbegin(), darray.rend());
            reverse(darray.begin(), darray.end());
            arr = darray;
        }

        cout << summ << endl;
    }

    return 0;
}