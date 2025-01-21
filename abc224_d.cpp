#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 305;
int m, d;
vector<int> to[N];
map<string, int> mp;
queue<string> q;
string s = "#000000000";
signed main()
{
    cin >> m;
    for (int i = 1, u, v; i <= m; i++)
    {
        cin >> u >> v;
        to[u].push_back(v);
        to[v].push_back(u);
    }
    for (int i = 1; i <= 8; i++)
    {
        cin >> d;
        s[d] = i + '0';
    }
    q.push(s);
    while (q.size())
    {
        string t = q.front();
        q.pop();
        if (t == "#123456780")
        {
            cout << mp[t] << endl;
            return 0;
        }
        int d = mp[t], id = t.find(48);
        for (int v : to[id])
        {
            swap(t[v], t[id]);
            if (mp[t] == 0)
            {
                mp[t] = d + 1;
                q.push(t);
            }
            swap(t[v], t[id]);
        }
    }
    cout << -1 << endl;
    return 0;
}
