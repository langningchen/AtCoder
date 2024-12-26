#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3F3F'3F3F;
int n, mx = -INF, mn = INF;
int main()
{
    cin >> n;
    for (int i = 0, a; i < n; i++)
    {
        cin >> a;
        mx = max(mx, a);
    }
    for (int i = 0, a; i < n; i++)
    {
        cin >> a;
        mn = min(mn, a);
    }
    cout << max(0, mn - mx + 1) << endl;
    return 0;
}

// @pid 8
