#include <bits/stdc++.h>

int main() {
  double x, sum = 0.0;
  double aumencion = 2.0;

  int ans = 0;
  scanf("%lf", &x);
  while (sum <= x) {
    sum = sum + aumencion;
    aumencion = aumencion * 0.98;
    ans += 1;
  }
  printf("%d\n", ans);
}