#include <bits/stdc++.h>
#define maxn 10000
using namespace std;

int arr[maxn][maxn];

int pos[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
// 0表示右，1表示下，2表示左，3表示上

int main() {
  int n;
  scanf("%d", &n);

  int kmax = n * n;

  /* fill the 2d array */
  int dir = 0;  // direccion
  int x = 0;
  int y = 0;
  for (int cnt = 1; cnt <= kmax; cnt++) {
    arr[x][y] = cnt;
    int tx = x + pos[dir][0];
    int ty = y + pos[dir][1];
    if (tx < 1 || tx > n || ty < 1 || ty > n || arr[tx][ty]) {
      // if we go beyond the border
      dir = (dir + 1) % 4;  // change direction
    }
    x += pos[dir][0];
    y += pos[dir][1];
  }

  /* output */
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%3d", arr[i][j]);
    }
    putchar('\n');
  }
  return 0;
}