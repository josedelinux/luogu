#include <stdio.h>

// nCr {n \choose x} = n!/r!*(n-r)!
long long C(int n, int r) {
  if (r > n - r) r = n - r;
  long long ans = 1;
  for (int i = n; i > n - r; i--) {
    ans = ans * i;
  }
  for (int i = r; i > 1; i--) {
    ans = ans / i;
  }
  return ans;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int row = 0; row < n; row++) {
    for (int col = 0; col <= row; col++) {
      printf("%d ", C(row, col));
    }
    putchar('\n');
  }
  return 0;
}