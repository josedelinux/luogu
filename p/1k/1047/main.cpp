#include <bits/stdc++.h>
using namespace std;
#define maxn 10005

char arr[maxn];

int main() {
  int ans = 0;
  memset(arr, 0, maxn);
  int l, m;
  scanf("%d", &l);
  memset(arr, 1, l + 1);

  scanf("%d", &m);
  while (m--) {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
      arr[i] = 0;
    }
  }

  for (int i = 0; i <= l; i++) {
    if (arr[i]) ans++;
  }
  printf("%d\n", ans);
  return 0;
}
