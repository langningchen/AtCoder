// 一棵树，第$i$个节点上有$a_i$个石头，每次选择两个叶子节点（度数为1的节点），将路径上经过的（包括起点终点）所有节点上都取走一个石头，如果路径上有一个点上没石头这个操作就不能进行，问能不能取完所有石头。

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 5;
int n, a[N];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    return 0;
}

// @tid 678e0c5fc1d389cb16a25ee3 @pid 169
