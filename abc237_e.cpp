#include <bits/stdc++.h>
using namespace std;
const int N = 500'005;
const int INF = 0x3F3F'3F3F;
int n, m, h[N];

int to[N], wei[N], nxt[N], head[N], cnt;
void ae(int u, int v, int e)
{
    to[++cnt] = v;
    wei[cnt] = e;
    nxt[cnt] = head[u];
    head[u] = cnt;
}

int dis[N];
bool vis[N];
void dij()
{
    priority_queue<pair<int, int>> q;
    q.push({0, 1});
    dis[1] = 0;
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (vis[u])
            continue;
        vis[u] = true;
        for (int i = head[u]; i; i = nxt[i])
        {
            int v = to[i];
            if (dis[v] > dis[u] + wei[i])
            {
                dis[v] = dis[u] + wei[i];
                q.push({-dis[v], v});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    for (int i = 1, u, v; i <= m; i++)
    {
        cin >> u >> v;
        ae(u, v, max(0, h[v] - h[u]));
        ae(v, u, max(0, h[u] - h[v]));
    }
    fill(dis, dis + N, INF);
    dij();
    int ans = -INF;
    for (int i = 1; i <= n; i++)
        ans = max(ans, h[1] - h[i] - dis[i]);
    cout << ans << endl;
    return 0;
}
