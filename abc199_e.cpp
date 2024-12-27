#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 20;
vector<pair<int, int>> lim[N];
ll n, m, dp[1 << N];

int main()
{
    cin >> n >> m;
    for (int i = 0, x, y, z; i < m; i++)
    {
        cin >> x >> y >> z;
        if (z < y)
            lim[x].push_back({y, z});
    }
    dp[0] = 1;
    for (int st = 0; st < (1 << n); st++)
    {
        vector<int> s;
        for (int i = 0; i < n; i++)
            if (st >> i & 1)
                s.push_back(i);
        int cnt = __builtin_popcount(st);
        bool ok = true;
        for (auto [y, z] : lim[cnt])
        {
            int tot = 0;
            for (auto x : s)
                if (x < y && ++tot > z)
                {
                    ok = false;
                    break;
                }
            if (!ok)
                break;
        }
        if (ok)
            for (int x : s)
                dp[st] += dp[st ^ (1 << x)];
    }
    printf("%lld\n", dp[(1 << n) - 1]);
    return 0;
}
