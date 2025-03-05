#include <bits/stdc++.h>
using namespace std;
int a1, a2, a3;
int main()
{
    cin >> a1 >> a2 >> a3;
    cout << ((a1 + a2 == 2 * a3) ||
                     (a2 + a3 == 2 * a1) ||
                     (a3 + a1 == 2 * a2)
                 ? "Yes"
                 : "No")
         << endl;
    return 0;
}

// @pid 1 @lang cc.cc20o2
