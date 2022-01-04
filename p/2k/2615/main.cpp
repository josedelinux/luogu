/*
so nasty
ref:
https://loicz.blog.luogu.org/p2615-ti-xie

1.若 (K-1)(K−1) 在第一行但不在最后一列，则将 KK 填在最后一行， (K-1)(K−1)
所在列的右一列；
2. 若 (K-1)(K−1) 在最后一列但不在第一行，则将 KK 填在第一列，
(K-1)(K−1) 所在行的上一行；
3.若 (K-1)(K−1) 在第一行最后一列，则将 KK 填在
(K-1)(K−1) 的正下方；
4.若 (K-1)(K−1) 既不在第一行，也不在最后一列，如果
(K-1)(K−1) 的右上方还未填数，则将 KK 填在 (K-1)(K−1) 的右上方，否则将 KK 填在
(K-1)(K−1) 的正下方。
*/
#include <bits/stdc++.h>
#define check(n) printf("Check: %d\n", n)
using namespace std;

int arr[99][99] = {0};

int main() {
  int n;
  scanf("%d", &n);
  if (n % 2 == 0) return -1;

  int k = 2;

  int x = 1;
  int y = n / 2 + 1;
  //首先将 1 写在第一行的中间。
  arr[x][y] = 1;

  int end = n * n;
  for (int i = 2; i <= end; i++) {
    if (x == 1 && y != n) {
      arr[n][y + 1] = k;
      x = n;
      y = y + 1;
    } else if (y == n && x != 1) {
      arr[x - 1][1] = k;
      x = x - 1;
      y = 1;
    } else if (x == 1 && y == n) {
      arr[x + 1][y] = k;
      x = x + 1;

    } else if (x != 1 && y != n) {
      if (arr[x - 1][y + 1] == 0) {  //如果k-1右上方还未填数
        arr[x - 1][y + 1] = k;
        x = x - 1;
        y = y + 1;
      } else {
        arr[x + 1][y] = k;
        x = x + 1;
      }
    }
    k++;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      printf("%d ", arr[i][j]);
    }
    putchar('\n');
  }

  return 0;
}