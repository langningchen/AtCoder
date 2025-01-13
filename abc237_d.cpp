#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
deque<int> q1, q2;
int n;
string s;
int main()
{
    cin >> n >> s;
    q1.push_back(0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            q2.push_front(q1.back()), q1.pop_back();
        q1.push_back(i + 1);
    }
    while (!q1.empty())
        cout << q1.front() << " ", q1.pop_front();
    while (!q2.empty())
        cout << q2.front() << " ", q2.pop_front();
    return 0;
}
