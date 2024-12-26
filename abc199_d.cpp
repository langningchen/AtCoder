#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6 + 10;
ll n, m, color[N], ans, cnt;
vector<ll> p;
bool vst[N];
vector<ll> to[N];
void get(ll u)
{
    vst[u] = true;
    p.push_back(u);
    for (auto v : to[u])
        if (!vst[v])
            get(v);
}
void dfs(ll u)
{
    if (u == (ll)p.size())
    {
        cnt++;
        return;
    }
    for (ll c = 1; c <= 3; c++)
    {
        bool flag = true;
        for (auto v : to[p[u]])
            if (color[v] == c)
            {
                flag = false;
                break;
            }
        if (!flag)
            continue;
        color[p[u]] = c;
        dfs(u + 1);
        color[p[u]] = 0;
    }
}
int main()
{
    cin >> n >> m;
    for (ll i = 1, l, r; i <= m; i++)
    {
        cin >> l >> r;
        to[l].push_back(r), to[r].push_back(l);
    }
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (vst[i])
            continue;
        cnt = 0;
        p.clear();
        get(i);
        dfs(0);
        ans = ans * cnt;
    }
    cout << ans << endl;
    return 0;
}

// @pid 10
