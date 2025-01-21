#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, x[N], y[N];
map<int, vector<pair<int, int>>> mp;
string s;
int main()
{
    cin >> n;
    for (int i = 1, x, y; i <= n; i++)
    {
        cin >> x >> y;
        mp[y].push_back({x, i});
    }
    cin >> s;
    for (auto &p : mp)
    {
        auto &v = p.second;
        sort(v.begin(), v.end());
        for (size_t i = 1; i < v.size(); i++)
            if ((v[i].first - v[i - 1].first > 0 && s[v[i].second - 1] == 'L' && s[v[i - 1].second - 1] == 'R') ||
                (v[i].first - v[i - 1].first < 0 && s[v[i].second - 1] == 'R' && s[v[i - 1].second - 1] == 'L'))
            {
                cout << "Yes" << endl;
                return 0;
            }
    }
    cout << "No" << endl;
    return 0;
}
