#include <bits/stdc++.h>
int main() {
  double x, sum = 0;
  double aumencion = 2.0;

  int ans = 1;
  scanf("%lf", &x);
  while (sum < x) {
    aumencion = aumencion * 0.98;
    sum = sum + aumencion;
    ans += 1;
  }
  printf("%d\n", ans);
}