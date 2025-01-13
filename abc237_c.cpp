#include <bits/stdc++.h>
using namespace std;
string s;
deque<int> q;
int cnt1, cnt2;
int main()
{
    cin >> s;
    q = deque<int>(s.begin(), s.end());
    while (q.size() && q.front() == 'a')
        q.pop_front(), cnt1++;
    while (q.size() && q.back() == 'a')
        q.pop_back(), cnt2++;
    if (q.size() == 0 && cnt1 != 0 && cnt2 == 0)
        cout << "Yes" << endl;
    else if (cnt1 > cnt2)
        cout << "No" << endl;
    else
    {
        for (size_t i = 0; i < q.size() / 2; i++)
        {
            if (q[i] != q[q.size() - 1 - i])
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
    return 0;
}
