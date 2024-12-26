#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 5;
const ll K = 60;
const ll MOD = 1e9 + 7;

ll hd[N], to[N << 1], nxt[N << 1], wt[N << 1], cnt;
void ae(ll u, ll v, ll w)
{
    to[++cnt] = v;
    wt[cnt] = w;
    nxt[cnt] = hd[u];
    hd[u] = cnt;
}

ll n, f[N], cnt0[K + 5], cnt1[K + 5];
void dfs(ll u, ll fa)
{
    for (ll i = hd[u]; i; i = nxt[i])
    {
        ll v = to[i];
        if (v != fa)
        {
            f[v] = f[u] ^ wt[i];
            dfs(v, u);
        }
    }
}

int main()
{
    cin >> n;
    for (ll i = 1, u, v, w; i < n; i++)
    {
        cin >> u >> v >> w;
        ae(u, v, w), ae(v, u, w);
    }
    dfs(1, 0);
    for (ll i = 1; i <= n; ++i)
        for (ll j = 0; j < K; ++j)
            (f[i] & (1ll << j) ? cnt1 : cnt0)[j]++;
    ll ans = 0;
    for (ll i = 0; i < K; ++i)
        ans = (ans + (1ll << i) % MOD * cnt0[i] % MOD * cnt1[i] % MOD) % MOD;
    cout << ans << endl;
    return 0;
}

// @pid 5
