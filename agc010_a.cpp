#include <bits/stdc++.h>
using namespace std;
int n;
bool ans;
int main()
{
    cin >> n;
    for (int i = 1, a; i <= n; i++)
    {
        cin >> a;
        ans ^= a & 1;
    }
    cout << (ans ? "NO" : "YES") << endl;
    return 0;
}

// @pid 167 @lang cc.cc20o2
