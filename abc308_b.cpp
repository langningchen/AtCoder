#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int n, m, p[N], Answer;
string c[N], d[N];
map<string, int> mp;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= m; i++)
        cin >> d[i];
    for (int i = 0; i <= m; i++)
    {
        cin >> p[i];
        if (i != 0)
            mp[d[i]] = p[i];
    }
    for (int i = 1; i <= n; i++)
        Answer += (mp[c[i]] == 0 ? p[0] : mp[c[i]]);
    cout << Answer << endl;
    return 0;
}
