/*
https://zhuanlan.zhihu.com/p/93647900
最简单的并查集
*/

#include <iostream>

using namespace std;

const int MAXN = 5007;
int fa[MAXN];

/*
假如有编号为1, 2, 3, ...,
n的n个元素，我们用一个数组fa[]来存储每个元素的父节点（因为每个元素有且只有一个父节点，所以这是可行的）。一开始，我们先将它们的父节点设为自己
*/
inline void init(int n) {
  for (int i = 1; i <= n; i++) {
    fa[i] = i;
  }
}

/*递归查找父节点*/
int find(int x) {
  if (fa[x] == x)
    return x;
  else
    return find(fa[x]);
}

inline void merge(int i, int j) { fa[find(i)] = find(j); }

int main() {
  int n, m, p, x, y;
  cin >> n >> m >> p;
  init(n);
  for (int i = 1; i <= m; i++) {
    cin >> x >> y;
    merge(x, y);
  }

  for (int i = 1; i <= p; i++) {
    cin >> x >> y;
    if (find(x) == find(y))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}
