#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 305;
int n, x[N], y[N], ans;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            for (int k = 0; k < j; k++)
                ans += (x[j] - x[i]) * (y[k] - y[i]) != (x[k] - x[i]) * (y[j] - y[i]);
    cout << ans << endl;
    return 0;
}
