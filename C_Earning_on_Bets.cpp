#include <bits/stdc++.h>

using i64 = long long;

constexpr int L = 232792560;

void solve()
{
    int n;
    std::cin >> n;

    std::vector<int> k(n), x(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> k[i];
        x[i] = L / k[i];
    }

    if (std::accumulate(x.begin(), x.end(), 0LL) < L)
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << x[i] << " \n"[i == n - 1];
        }
    }
    else
    {
        std::cout << -1 << "\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
