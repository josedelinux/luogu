#include <stdio.h>

#define maxn 255

int main() {
  int a, b, c;
  int knt[maxn] = {0};
  int max = 0;
  int ans;
  scanf("%d%d%d", &a, &b, &c);

  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      for (int k = 1; k <= c; k++) {
        int sum = i + j + k;
#ifdef DEBUG
        printf("%d %d %d -> %d\n", i, j, k, sum);
#endif
        knt[sum]++;
      }
    }
  }

  // from the back, we will get the first biggest one
  for (int i = maxn; i >= 0; i--) {
    if (knt[i] >= max) {
      max = knt[i];
      ans = i;
    }
  }
  printf("%d\n", ans);
  return 0;
}
