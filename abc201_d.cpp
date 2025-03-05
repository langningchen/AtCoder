#include <bits/stdc++.h>
using namespace std;
const int N = 2005;
const int INF = 0x3f3f3f3f;
int w, h, a[N][N], m[N][N][2];
int dfs(int x, int y, bool t)
{
    if (m[x][y][t] != INF)
        return m[x][y][t];
    if (x == w && y == h)
        return 0;
    else if (t)
        m[x][y][t] = min((x == w ? INF : dfs(x + 1, y, false) - a[x + 1][y]),
                         (y == h ? INF : dfs(x, y + 1, false) - a[x][y + 1]));
    else
        m[x][y][t] = max((x == w ? -INF : dfs(x + 1, y, true) + a[x + 1][y]),
                         (y == h ? -INF : dfs(x, y + 1, true) + a[x][y + 1]));
    return m[x][y][t];
}
int main()
{
    cin >> w >> h;
    for (int i = 1; i <= w; i++)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= h; j++)
            a[i][j] = (s[j - 1] == '+' ? 1 : -1);
    }
    memset(m, 0x3f, sizeof(m));
    int ans = dfs(1, 1, false);
    cout << (ans > 0 ? "Takahashi" : (ans < 0 ? "Aoki" : "Draw")) << endl;
    return 0;
}

// @pid 4 @lang cc.cc20o2
