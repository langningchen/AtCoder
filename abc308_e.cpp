#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int on, oa[N], n, a[N];
long long Answer;
string s;
int main()
{
    cin >> on;
    for (int i = 0; i < on; i++)
        cin >> oa[i];
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
        if (s[i] != 'M' && s[i] != 'E' && s[i] != 'X')
        {
            s.erase(i);
            i--;
        }
        else
        {
            a[n] = oa[i];
            n++;
        }
    for (int i = 0; i < n; i++)
        if (s[i] == 'M')
            for (int j = i + 1; j < n; j++)
                if (s[j] == 'E')
                    for (int k = j + 1; k < n; k++)
                        if (s[k] == 'X')
                        {
                            for (int x = 0; x < 4; x++)
                                if (x != a[i] && x != a[j] && x != a[k])
                                {
                                    Answer += x;
                                    break;
                                }
                        }
    cout << Answer << endl;
    return 0;
}
