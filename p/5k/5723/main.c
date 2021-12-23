#include <stdio.h>

int is_prime(int n) {
  int i;
  for (i = 2; i < n; i++) {
    if (n % i == 0) break;
  }
  if (i == n)
    return 1;
  else
    return 0;
}

int main() {
  int l;
  int sum = 0;
  int k = 0;
  scanf("%d", &l);

  for (int i = 2;; i++) {
    if (is_prime(i)) {
      sum = sum + i;
      if (sum > l) {
        printf("%d\n", k);
        break;
      }
      printf("%d\n", i);
      k++;
    }
  }

  return 0;
}