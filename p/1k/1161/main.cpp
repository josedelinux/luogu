#include <bits/stdc++.h>
#define DEBUGNO
#define maxn 5005

bool light[2000000] = {false};
double a[maxn];
int t[maxn];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%lf %d", &a[i], &t[i]);
  }
  for (int i = 0; i < n; i++) {
    // t represents temporarily variable
    for (int tt = 1; tt <= t[i]; tt++) {
#ifdef DEBUG
      printf("i: %d tt: %d\n", i, tt);
#endif
      int target = tt * a[i];
#ifdef DEBUG
      printf("target %d\n", target);
#endif
      light[target] = !light[target];
    }
  }
  // find the still-on bulb
  for (int i = 0; i < 2000000; i++) {
    if (light[i]) printf("%d\n", i);
  }
  return 0;
}