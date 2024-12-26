#include <bits/stdc++.h>
using namespace std;
int n, q, offset;
string s;
int main()
{
    cin >> n >> s >> q;
    while (q--)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1)
            swap(s[(a - 1 + offset) % (2 * n)], s[(b - 1 + offset) % (2 * n)]);
        else
            offset = (offset + n) % (2 * n);
    }
    cout << s.substr(offset) + s.substr(0, offset) << endl;
    return 0;
}

// @pid 9
