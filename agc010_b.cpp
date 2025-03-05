#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 5;
ll n, a[N], s, tot;
int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    tot = n * (n + 1) / 2;
    if (s % tot != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (ll i = 1; i <= n; i++)
    {
        ll dif = a[i] - a[i % n + 1] + s / tot;
        if (dif < 0 || dif % n != 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

// @pid 168 @lang cc.cc20o2
