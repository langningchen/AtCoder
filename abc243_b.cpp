#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int n, a[N], b[N], cnt1, cnt2;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++)
        cnt1 += a[i] == b[i];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cnt2 += i != j && a[i] == b[j];
    cout << cnt1 << endl
         << cnt2 << endl;
    return 0;
}
