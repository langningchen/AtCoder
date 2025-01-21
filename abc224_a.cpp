#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin >> s;
    if (s.size() >= 2 && s.end()[-1] == 'r' && s.end()[-2] == 'e')
        cout << "er" << endl;
    else
        cout << "ist" << endl;
    return 0;
}
