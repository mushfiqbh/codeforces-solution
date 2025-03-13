#include <bits/stdc++.h>
using namespace std;
 
// Explanation:
//   - n, k: length of array a and number of segments (k even)
//   - E = n - k is the extra freedom (beyond the minimum one element per segment).
//   - The even segments (S2, S4, …, S_k) contribute, in order, the array b.
//   - In any valid partition the first element of b is chosen as a[p1+1] where 
//     the first odd segment S1 has length p1 (with 1 <= p1 <= n-k+1).
//     Hence b1 can be any element from indices 2 to n-k+2 (if k<n)
//     (if k==n then there is no freedom and b1 is forced to be a[2]).
//   - Similarly, one may prove that the r-th element of b may be chosen from an interval
//         [L, R] = [2*r, 2*r + E]    (when k<n)   and R = L when k==n.
//   - We “check” for the smallest r (1 <= r <= k/2) for which there exists some candidate position pos 
//     in [L, R] (and pos <= n) with a[pos] not equal to r.
//   - If such an r exists then an optimal partition can force a mismatch at position r (so the cost is r).
//   - Otherwise every candidate in every position forces b[r]=r and so the only partition available 
//     is the forced one – yielding cost (k/2)+1.
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int evenCount = k/2; // there are k/2 even segments (which form b)
        int E = n - k;      // extra freedom: the extra elements (beyond the minimal k elements)
 
        // We initialize our answer to the "forced" case: if we are forced to take one element per even segment,
        // then b[i] = a[2*i] and so the cost is (k/2)+1.
        int ans = evenCount + 1;
 
        // Check r = 1 first.
        // For the first even segment, p1 (the length of the first odd segment) can be any number between 1 and n - (k-1)
        // so that b1 = a[p1+1] may come from any index in [2, n - k + 2] (if k < n).
        int L1 = 2;
        int R1 = (k == n ? 2 : n - k + 2);
        bool canForce = false;
        for (int pos = L1; pos <= R1 && pos <= n; pos++){
            if(a[pos] != 1){
                canForce = true;
                break;
            }
        }
        if(canForce){
            ans = 1;
        } else {
            // Otherwise b1 is forced to be 1.
            // Now for r from 2 to evenCount we “simulate” the union of possibilities.
            // In any valid partition one may show that the r-th element of b can be chosen from indices
            // L = 2*r  up to  R = 2*r + E   (when k < n) and when k == n we have E = 0 so R = L.
            for (int r = 2; r <= evenCount; r++){
                int L = 2 * r;
                int R = (k == n ? L : 2 * r + E);
                bool possible = false;
                for (int pos = L; pos <= R && pos <= n; pos++){
                    if(a[pos] != r) { 
                        possible = true; 
                        break; 
                    }
                }
                if(possible){
                    ans = min(ans, r);
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
