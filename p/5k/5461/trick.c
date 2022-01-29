#include <stdio.h>
#include <string.h>

unsigned char square[1024 + 1][1024 + 1];

int main() {
  int n;
  scanf("%d", &n);
  n = 1 << n;
  square[0][n + 1] = 1;
  // print square while calculate it
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n; col++) {
      square[row][col] = square[row - 1][col] ^ square[row - 1][col + 1];
      printf("%d ", square[row][col]);
    }
    putchar('\n');
  }
  return 0;
}