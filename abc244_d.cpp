#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll m, u[44], v[44];

ll s[11], state;
map<ll, ll> vis;

void bfs()
{
    queue<ll> q;
    q.push(state);
    vis[state] = 0;
    while (q.size())
    {
        state = q.front();
        ll _s = state;
        q.pop();
        if (state == 123456780)
            cout << vis[state] << '\n', exit(0);
        for (int i = 9; i; --i)
            s[i] = state % 10, state /= 10;
        for (int i = 1; i <= m; i++)
        {
            ll _u = u[i], _v = v[i];
            if (s[_u] != 0 && s[_v] != 0)
                continue;
            swap(s[_u], s[_v]);
            state = 0;
            for (int i = 1; i < 10; i++)
                state = state * 10 + s[i];
            if (!vis.count(state))
            {
                vis[state] = vis[_s] + 1;
                q.push(state);
            }
            swap(s[_u], s[_v]);
        }
    }
    cout << -1;
}

int main()
{
    cin >> m;
    up(1, m, i)
    {
        cin >> u[i] >> v[i];
    }
    up(1, 8, i)
    {
        int x;
        cin >> x;
        s[x] = i;
    }
    up(1, 9, i) state = state * 10 + s[i];
    bfs();
}
