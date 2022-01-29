#include <stdio.h>
#include <string.h>

unsigned char square[1024][1024];

void pardon(int length) {
  if (length <= 0) return;
  length = length / 2;
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      square[i][j] = 0;
    }
  }
  pardon(length);
}

int main() {
  int n;
  scanf("%d", &n);
  n = 1 << n;
  memset(square, 1, sizeof(square));

  pardon(n);
  // print square
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      printf("%d ", square[row][col]);
    }
    putchar('\n');
  }
  return 0;
}