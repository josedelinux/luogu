#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, n, ans;
  // actually days;
  int day_df = 0;
  scanf("%d%d", &x, &n);
  for (int i = x; i < x + n; i++) {
    int day = (i % 7);
    // printf("day:%d\n", day);

    if (day == 0 || day == 6) {
      // printf("free\n");
      continue;
    }
    day_df += 1;
  }
  ans = day_df * 250;
  printf("%d", ans);
  return 0;
}