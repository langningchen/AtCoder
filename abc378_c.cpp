#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
unordered_map<ll, ll> m;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        cout << (m[a] == 0 ? -1 : m[a]) << " ";
        m[a] = i;
    }
    return 0;
}
