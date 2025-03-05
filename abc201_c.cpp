#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int ans;
char c[11];
bool has[10] = {false};
int main()
{
    cin >> c;
    for (int i = 0; i < 10000; i++)
    {
        memset(has, 0, sizeof(has));
        bool flag = true;
        for (int j = 0; flag && j < 4; j++)
        {
            int digit = i % (int)pow(10, j + 1) / pow(10, j);
            has[digit] = true;
            if (c[digit] == 'x')
                flag = false;
        }
        for (int j = 0; flag && j < 10; j++)
            if (c[j] == 'o' && !has[j])
                flag = false;
        if (flag)
            ans++;
    }
    cout << ans << endl;
    return 0;
}

// @pid 3 @lang cc.cc20o2
