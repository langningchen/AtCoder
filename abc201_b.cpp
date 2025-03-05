#include <bits/stdc++.h>
using namespace std;
int n;
map<int, string> mp;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int t;
        cin >> s >> t;
        mp[t] = s;
    }
    cout << prev(mp.rbegin())->second << endl;
    return 0;
}

// @pid 2 @lang cc.cc20o2
