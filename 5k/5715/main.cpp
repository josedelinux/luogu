#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[4];

  scanf("%d%d%d", &a[0], &a[1], (a + 2));
  //左闭右开
  sort(a, a + 3);
  printf("%d %d %d\n", *a, a[1], *(a + 2));

  return 0;
}
