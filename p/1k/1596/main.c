#include <stdio.h>
#define maxn 100

int n, m;
char field[maxn][maxn + 1];

void dfs(int x, int y) {
  field[x][y] = '.';  // delete it

  for (int dx = -1; dx <= 1; dx++) {
    for (int dy = -1; dy <= 1; dy++) {
      int nx = x + dx;
      int ny = y + dy;
      // whether is inside the bolder
      if (nx >= 0 && nx <= n && ny >= 0 && ny <= m && field[nx][ny] == 'W') {
        dfs(nx, ny);
      }
    }
  }
  return;
}
int main() {
  int res = 0;
  scanf("%d %d", &n, &m);
  for (int row = 0; row < n; row++) {
    // for (int col = 0; col < m; col++) {
    //   scanf("%c", &field[m][n]);
    // }

    // avoid newline shit
    scanf("%s", field[row]);
  }

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < m; j++) {
      if (field[i][j] == 'W') {  //如果是W的话就直接开始遍历
        dfs(i, j);
        res++;  //水潭加一处
      }
    }
  }
  printf("%d\n", res);
  return 0;
}
