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
        int div = 0;
        int sev = 0, five = 0, three = 0;
        if (n % 7 == 0)
        {
            sev += n / 7;
            n -= (sev * 7);
        }
        if (n % 5 == 0)
        {
            five += n / 5;
            n -= (five * 5);
        }
        if (n % 3 == 0)
        {
            three += n / 3;
            n -= (three * 3);
        }
        if (n % 7 == 5)
        {
            sev += (n / 7);
            five++;
            n -= (sev * 7) + 5;
        }
        if (n % 7 == 3)
        {
            sev += (n / 7);
            three++;
            n -= (sev * 7) + 3;
        }
        if (n % 5 == 2)
        {
            div = n / 5;
            if (div >= 2)
            {
                five += (n / 5);
                five--;
                sev++;
                n -= (five * 5) + 7;
            }
        }
        if (n % 5 == 3)
        {
            five += (n / 5);
            three++;
            n -= (five * 5) + 3;
        }
        if (n % 3 == 1)
        {
            div = n / 3;
            if (div >= 3)
            {
                three += (n / 3);
                three -= 2;
                sev++;
                n -= (three * 3) + 7;
            }
        }
        if (n % 3 == 2)
        {
            div = n / 3;
            if (div >= 2)
            {
                three += (n / 3);
                three--;
                five++;
                n -= (three * 3) + 5;
            }
        }

        if (n == 0)
        {
            cout << three << " " << five << " " << sev << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}

/*
Recently a new building with a new layout was constructed in Monocarp's hometown. According to this new layout, the building 
consists of three types of apartments: three-room, five-room, and seven-room apartments. It's also known that each room of each 
apartment has exactly one window. In other words, a three-room apartment has three windows, a five-room — five windows, and a 
seven-room — seven windows.

Monocarp went around the building and counted n windows. Now he is wondering, how many apartments of each type the building 
may have.

Unfortunately, Monocarp only recently has learned to count, so he is asking you to help him to calculate the possible quantities 
of three-room, five-room, and seven-room apartments in the building that has n windows. 
If there are multiple answers, you can print any of them.

Here are some examples:

if Monocarp has counted 30
 windows, there could have been 2
 three-room apartments, 2
 five-room apartments and 2
 seven-room apartments, since 2⋅3+2⋅5+2⋅7=30
;
if Monocarp has counted 67
 windows, there could have been 7
 three-room apartments, 5
 five-room apartments and 3
 seven-room apartments, since 7⋅3+5⋅5+3⋅7=67
;
if Monocarp has counted 4
 windows, he should have mistaken since no building with the aforementioned layout can have 4
 windows.
Input
Th first line contains one integer t
 (1≤t≤1000
) — the number of test cases.

The only line of each test case contains one integer n
 (1≤n≤1000
) — the number of windows in the building.

Output
For each test case, if a building with the new layout and the given number of windows just can't exist, print −1
.

Otherwise, print three non-negative integers — the possible number of three-room, five-room, and seven-room apartments. If there 
are multiple answers, print any of them.

Example
InputCopy
4
30
67
4
14
OutputCopy
2 2 2
7 5 3
-1
0 0 2

*/