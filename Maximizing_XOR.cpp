// Author: Mushfiq R.
#include <stdio.h>

int maximizingXor(int l, int r)
{
    int maxx = 0;
    for (int i = l; i <= r; i++)
    {
        for (int j = i; j <= r; j++)
        {
            if((i ^ j) > maxx){
                maxx = (i ^ j);
            }
        }
    }
    return maxx;
}

int main()
{
    int l, r;
    scanf("%d", &l);
    scanf("%d", &r);

    int ans = maximizingXor(l, r);

    printf("%d", ans);

    return 0;
}