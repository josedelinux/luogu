/*
看不懂代码...
其实这题完全没必要很多的if语句，把幻方扩展开来，
题目的意思就是从第一行中点开始，把每一个下面的数
放到“右上角”，若右上角有数，则放到正下方。
https://www.luogu.com.cn/problem/P2615
https://lesteryu.blog.luogu.org/solution-p2615
*/

#include <cstdio>
using namespace std;
int n, a[40][40], x, y;
int main() {
  scanf("%d", &n);
  x = 1, y = (n + 1) / 2;
  for (int i = 1; i <= n * n; i++) {
    a[x][y] = i;
    if (!a[(x - 2 + n) % n + 1][y % n + 1]) {
      x = (x - 2 + n) % n + 1;
      y = y % n + 1;
    } else
      x = x % n + 1;  //数学运算
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
