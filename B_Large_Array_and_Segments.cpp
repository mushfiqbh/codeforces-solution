#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int t; 
    cin >> t; 
    
    while (t--) { 
        int n; 
        ll k, x; 
        cin >> n >> k >> x; 

        vector<ll> a(n); 
        for (int i = 0; i < n; i++) cin >> a[i]; 

        vector<ll> pre(n + 1, 0); 
        for (int i = 0; i < n; i++) pre[i + 1] = pre[i] + a[i]; 

        ll T = pre[n]; 
        if (T * k < x) {
            cout << "0\n";
            continue;
        }

        vector<ll> Larr(n, 0); 

        for (int i = 0; i < n; i++) { 
            ll rem = pre[n] - pre[i]; 

            if (rem >= x) { 
                int lo = i + 1, hi = n, ans = n; 
                while (lo <= hi) { 
                    int mid = (lo + hi) / 2; 
                    if (pre[mid] - pre[i] >= x) { 
                        ans = mid; 
                        hi = mid - 1; 
                    } else { 
                        lo = mid + 1; 
                    } 
                } 
                Larr[i] = ans - i; 
            } else { 
                ll needed = x - rem; 
                ll cycles = (needed + T - 1) / T; 
                ll base = (n - i) + (cycles - 1) * n; 
                ll req = x - ((pre[n] - pre[i]) + (cycles - 1) * T); 
                int j = lower_bound(pre.begin(), pre.end(), req) - pre.begin(); 
                
                if (j > n) j = n;
                
                Larr[i] = base + j; 
            } 
        } 

        ll ans = 0; 
        for (int i = 0; i < n; i++) { 
            ll L = Larr[i]; 
            ll maxVal = k * n - i - L; 
            if (maxVal < 0) continue; 
            ll maxJ = min(k - 1, maxVal / n); 
            ans += (maxJ + 1); 
        } 
        
        cout << ans << "\n"; 
    } 

    return 0; 
}
