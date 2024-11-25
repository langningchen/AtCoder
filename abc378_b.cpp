#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int n, q[N], r[N], _q;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> q[i] >> r[i];
    cin >> _q;
    for (int i = 1; i <= _q; i++)
    {
        int t, d;
        cin >> t >> d;
        cout << d + (q[t] - (d - r[t]) % q[t]) % q[t] << endl;
    }
    return 0;
}
