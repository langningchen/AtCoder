#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 5;
ll n, m, a[N], ans, t;
int main()
{
    cin >> n >> m;
    t = n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
    {
        ans = (ans + a[i] * (t - i) % m) % m;
    }
    cout << ans << endl;
    return 0;
}

// Give n numbers, calculate the sum of the product of all the subarrays abd mod m.

// 1 2
/*
   1
     2
   1 2
*/
// 2 2

// 1 2 3
/*
   1
     2
       3
   1 2
     2 3
   1 2 3
*/
// 3 4 3

// 1 2 3 4
/*
   1
     2
       3
         4
   1 2
     2 3
       3 4
   1 2 3
     2 3 4
   1 2 3 4
*/
// 4 6 6 4

// 1 2 3 4 5
/*
   1
     2
       3
         4
           5
   1 2
     2 3
       3 4
         4 5
   1 2 3
     2 3 4
       3 4 5
   1 2 3 4
     2 3 4 5
   1 2 3 4 5
*/
// 5 8 9 8 5

// 1 2 3 4 5 6
/*
   1
     2
       3
         4
           5
             6
   1 2
     2 3
       3 4
         4 5
           5 6
   1 2 3
     2 3 4
       3 4 5
         4 5 6
   1 2 3 4
     2 3 4 5
       3 4 5 6
   1 2 3 4 5
     2 3 4 5 6
   1 2 3 4 5 6
*/
// 6 12 15 14 12 6
