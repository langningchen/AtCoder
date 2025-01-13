#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, m;
vector<int> a[N];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << a[j][i] << (j == n - 1 ? '\n' : ' ');
    return 0;
}
