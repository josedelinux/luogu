#include <bits/stdc++.h>
using namespace std;

int arr[99][99] = {0};

int main() {
  int n;
  scanf("%d", &n);

  int k = 1;
  for (int i = 1; i <= n; i++) {  // line
    for (int j = 1; j <= n; j++) {
      int cur_l = k % n;
      int cur_c = k / n;
      if (cur_l == 1 && cur_c != n - 1) {
        arr[n][k] == k + 1;
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