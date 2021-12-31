/*
终究是数组题单下面的题,肯定要用数组的...
*/
#include <bits/stdc++.h>
using namespace std;
#define maxn 1005

int cub[21][21][21];

int main() {
  int w, x, h;
  int q;
  scanf("%d%d%d", &w, &x, &h);
  int ans = 0;
  scanf("%d", &q);
  while (q--) {
    int x1, y1, z1;
    int x2, y2, z2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
    for (int i = min(x1, x2); i <= max(x1, x2); i++) {
      for (int j = min(y1, y2); j <= max(y1, y2); j++) {
        for (int k = min(z1, z2); k <= max(z1, z2); k++) {
          cub[i][j][k] = 1;
          printf("Marked: %d%d%d\n", i, j, k);
        }
      }
    }
  }

  // count
  for (int i = 0; i <= w; i++) {
    for (int j = 0; j <= x; j++) {
      for (int k = 0; k <= h; k++) {
        if (cub[i][j][k] == 0) ans++;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
