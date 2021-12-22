#include <bits/stdc++.h>
int main() {
  double x, sum = 2;

  int ans = 1;
  scanf("%lf", &x);
  while (sum < x) {
    sum = sum + sum * 0.98;
    ans += 1;
  }
  printf("%d\n", ans);
}