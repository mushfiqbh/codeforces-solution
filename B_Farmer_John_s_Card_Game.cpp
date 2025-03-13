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
        int cows, cards;
        cin >> cows >> cards;

        vector<int> card(cows), order(cows);
        vector<vector<int>> cowc(cows, vector<int>(cards));

        for (int i = 0; i < cows; i++)
        {
            for (int j = 0; j < cards; j++)
            {
                cin >> cowc[i][j];
            }
            vsort(cowc[i]);

            card[i] = cowc[i][0];
            order[i] = i + 1;
        }

        for (int i = 0; i < cows; i++)
        {
            for (int j = i + 1; j < cows; j++)
            {
                if (card[i] > card[j])
                {
                    swap(card[i], card[j]);
                    swap(order[i], order[j]);
                }
            }
        }

        bool valid = true;
        int current = -1;

        for (int r = 0; r < cards && valid; r++)
        {
            for (int i = 0; i < cows && valid; i++)
            {
                bool played = false;
                int index = order[i] - 1;
                for (int j = 0; j < cards; j++)
                {
                    if (cowc[index][j] > current)
                    {
                        played = true;
                        current = cowc[index][j];
                        cowc[index][j] = -1;
                        break;
                    }
                }
                if (!played)
                {
                    valid = false;
                }
            }
        }

        if (valid)
        {
            for (int i = 0; i < cows; i++)
            {
                cout << order[i] << " ";
            }
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}
