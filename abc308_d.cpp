#include <bits/stdc++.h>
using namespace std;
const int N = 505;
const int dx[4] = {-1, 0, 0, 1};
const int dy[4] = {0, -1, 1, 0};
int h, w;
char m[N][N];
bool Visited[N][N];
bool DFS(int x, int y, int t)
{
    if (x < 0 || x >= h || y < 0 || y >= w || Visited[x][y] || string("snuke")[t % 5] != m[x][y])
        return false;
    if (x == h - 1 && y == w - 1)
        return true;
    Visited[x][y] = true;
    for (int i = 0; i < 4; i++)
        if (DFS(x + dx[i], y + dy[i], t + 1))
            return true;
    return false;
}
int main()
{
    cin >> h >> w;
    for (int i = 0; i < h; i++)
        cin >> m[i];
    cout << (DFS(0, 0, 0) ? "Yes" : "No") << endl;
    return 0;
}
