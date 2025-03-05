#include <bits/stdc++.h>
using namespace std;
string s;
int ans, cnt;
int main()
{
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == 'S')
            cnt++;
        else if (cnt)
            cnt--;
        else
            ans++;
    }
    cout << ans + cnt << endl;
    return 0;
}

// @pid 161 @lang cc.cc20o2
