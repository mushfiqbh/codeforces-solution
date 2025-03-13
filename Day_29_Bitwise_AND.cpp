#include <stdio.h>

int bitwiseAnd(int N, int K) {
    int maxx = 0;
    for(int i = 1; i < N; i++){
        for(int j = i+1; j <= N; j++){
            if((i & j) > maxx && (i & j) < K){
                maxx = (i & j);
            }
        }
    }
    return maxx;
}

int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d", &n);
        scanf("%d", &k);

        int ans = bitwiseAnd(n, k);
        printf("%d\n", ans);
    }
    return 0;
}