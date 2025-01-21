#include <bits/stdc++.h>
using namespace std;
int v, a[3];
int cnt = -1;
int main()
{
    cin >> v >> a[0] >> a[1] >> a[2];
    while (v >= 0)
    {
        cnt = (cnt + 1) % 3;
        v -= a[cnt];
    }
    cout << "FMT"[cnt] << endl;
    return 0;
}
