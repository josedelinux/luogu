/*
so nasty
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

  int k = 1;
  for (int i = 1; i <= n; i++) {  // line
    for (int j = 1; j <= n; j++) {
      // for k-1
      int cur_l = k / n + 1;
      int cur_c = k % n + 1;

      if (cur_l == 1 && cur_c != n) {
        //若 (K-1)(K−1) 在第一行但不在最后一列，则将 KK 填在最后一行，
        //(K−1) 所在列的右一列；
        arr[n][k + 1 + 1] = k + 1;
      } else if (cur_l == n && cur_c != 1) {
        //若 (K-1)(K−1) 在最后一列但不在第一行，则将 KK 填在第一列， (K-1)
        //所在行的上一行；
        arr[1][k + 1 - 1] = k + 1;
      }

      k++;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      printf("%d ", arr[i][j]);
    }
    putchar('\n');
  }

  return 0;
}