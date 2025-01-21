#include <bits/stdc++.h>
using namespace std;
const int N = 105;
const int INF = 0x3F3F'3F3F;
int n, f[N], a[N], mx = -INF, mn = INF;
int main()
{
   cin >> n;
   try
   {
      for (int i = 1; i <= n; i++)
      {
         scanf("%d", &a[i]);
         f[a[i]]++;
         mx = max(mx, a[i]);
         mn = min(mn, a[i]);
      }
      if (mn < (mx + 1) / 2)
         throw false;
      if ((mx & 1) == 1 && f[(mx + 1) / 2] != 2)
         throw false;
      if ((mx & 1) == 0 && f[mx / 2] != 1)
         throw false;
      for (int i = (mx + 1) / 2 + 1; i <= mx; i++)
         if (f[i] < 2)
            throw false;
      throw true;
   }
   catch (bool x)
   {
      cout << (x ? "Possible" : "Impossible") << endl;
   }
   return 0;
}
