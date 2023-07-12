#include <bits/stdc++.h>
using namespace std;
int s[8];
int main()
{
    for (int i = 0; i < 8; i++)
    {
        cin >> s[i];
        if (s[i] < 100 || s[i] > 675 || s[i] % 25 != 0 || (i != 0 && s[i - 1] > s[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
