#include <bits/stdc++.h>
using namespace std;
int n, k, ans, cnt;
string s;
int main()
{
    cin >> n >> k >> s;
    for (int i = 0; i < n; i++)
        if (s[i] == 'O')
        {
            if (++cnt >= k)
                cnt = 0, ans++;
        }
        else
            cnt = 0;
    cout << ans << endl;
    return 0;
}
