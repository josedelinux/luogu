#include <bits/stdc++.h>

int a[1010];

int main() {
  int n;
  double ans = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  std::sort(a, a + n);
  //   for (int i = 0; i < n; i++) {
  //     printf("%d ", a[i]);
  //   }
  for (int i = 1; i < (n - 1); i++) {
    ans += a[i];
  }
  printf("%.2lf\n", ans / (n - 2.0));
  return 0;
}