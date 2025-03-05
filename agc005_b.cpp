#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 200'005;
ll n, a[N], l[N], r[N], ans;
stack<ll> s;
int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
    {
        while (!s.empty() && a[s.top()] >= a[i])
            s.pop();
        l[i] = s.empty() ? 0 : s.top();
        s.push(i);
    }
    while (!s.empty())
        s.pop();
    for (ll i = n; i >= 1; i--)
    {
        while (!s.empty() && a[s.top()] >= a[i])
            s.pop();
        r[i] = s.empty() ? n + 1 : s.top();
        s.push(i);
    }
    for (ll i = 1; i <= n; i++)
        ans += a[i] * (i - l[i]) * (r[i] - i);
    cout << ans << endl;
    return 0;
}

// @pid 162 @lang cc.cc20o2
