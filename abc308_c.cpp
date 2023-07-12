#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200005;
int n;
#define NODE pair<pair<int, int>, int>
NODE pq[N];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        pq[i] = (NODE){{a, b}, i};
    }
    sort(pq + 1, pq + n + 1,
         [](NODE a, NODE b)
         {
             ll TempA = 1ll * a.first.first * b.first.second;
             ll TempB = 1ll * b.first.first * a.first.second;
             if (TempA != TempB)
                 return TempA > TempB;
             return a.second < b.second;
         });
    for (int i = 1; i <= n; i++)
        cout << pq[i].second << " ";
    cout << endl;
    return 0;
}
