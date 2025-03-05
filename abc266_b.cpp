#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 998244353;
ll n;
int main()
{
    cin >> n;
    cout << (n % MOD + MOD) % MOD << endl;
    return 0;
}

// @pid 44 @lang cc.cc20o2
