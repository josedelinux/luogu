#include <bits/stdc++.h>

int main() {
  int k, n = 2;
  double sum = 1;
  scanf("%d", &k);

  for (n = 2;; n++) {
    sum += 1.0 / n;
    if (sum > k) {
      break;
    }
  }

  printf("%d\n", n);
  return 0;
}