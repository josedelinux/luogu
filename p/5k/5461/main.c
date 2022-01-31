#include <stdio.h>
#include <string.h>

unsigned char square[1024][1024];

void pardon(int length, int posRow, int posCol) {
  if (length == 2) {  // Recursion Bounds
    square[posRow][posCol] = 0;
    return;
  }

  for (int i = 1; i <= posRow + length / 2 - 1; i++) {
    for (int j = posCol; j <= posCol + length / 2 - 1; j++) {
      square[i][j] = 0;
    }
  }
  pardon(length / 2, posRow + length / 2, posCol);
  pardon(length / 2, posRow + length / 2, posCol + length / 2);
  pardon(length / 2, posRow, posCol + length / 2);
}

int main() {
  int n;
  scanf("%d", &n);
  n = 1 << n;
  memset(square, 1, sizeof(square));

  pardon(n, 1, 1);

  // print square
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n; col++) {
      printf("%d ", square[row][col]);
    }
    putchar('\n');
  }
  return 0;
}