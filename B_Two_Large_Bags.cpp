#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int> arr(n);
        int mx = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        int half = n/2;  // final size for each bag
 
        // Build frequency array for numbers 1..mx.
        vector<int> freq(mx+1, 0);
        for (int a : arr) {
            // a is between 1 and n.
            freq[a]++;
        }
 
        bool possible = true;
        // For our method, every number in [1, mx] must appear at least once.
        for (int i = 1; i <= mx; i++){
            if(freq[i] == 0){
                possible = false;
                break;
            }
        }
        // Also, bag2 must contain at least one copy of each number from 1 to mx,
        // so total in bag2 is at least mx. Therefore, we must have mx <= half.
        if(mx > half)
            possible = false;
 
        if(!possible){
            cout << "No\n";
            continue;
        }
 
        // Precompute cumulative frequency F[i] = freq[1] + ... + freq[i].
        vector<int> F(mx+1, 0);
        for (int i = 1; i <= mx; i++){
            F[i] = F[i-1] + freq[i];
        }
 
        // dp[i][s] will be true if it is possible to choose values
        // T[1], ..., T[i] (for bag2) with total s that satisfy:
        //    1 <= T[j] <= freq[j] for each j,
        //    and for every prefix j (1<=j<=i): 2*(T[1]+...+T[j]) <= F[j].
        vector<vector<bool>> dp(mx+1, vector<bool>(half+1, false));
        dp[0][0] = true;
 
        // Process numbers 1 through mx.
        for (int i = 1; i <= mx; i++){
            for (int s = 0; s <= half; s++){
                if(!dp[i-1][s]) continue;
                // For the number i, we must choose at least 1 (to keep consecutiveness)
                // and at most freq[i] copies can be used in bag2.
                for (int take = 1; take <= freq[i]; take++){
                    if(s + take > half) break;
                    // Check the pairing condition for the prefix up to i:
                    // 2*(s + take) must be <= F[i]
                    if( 2 * (s + take) <= F[i] ){
                        dp[i][s+take] = true;
                    }
                }
            }
        }
 
        cout << (dp[mx][half] ? "Yes" : "No") << "\n";
    }
    return 0;
}
