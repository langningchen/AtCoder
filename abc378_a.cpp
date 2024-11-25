#include <bits/stdc++.h>
using namespace std;
int cnt[5];
int main()
{
    for (int i = 0; i < 4; i++)
    {
        int t;
        cin >> t;
        cnt[t]++;
    }
    int ans = 0;
    for (int i = 1; i <= 4; i++)
        ans += cnt[i] / 2;
    cout << ans << endl;
    return 0;
}
