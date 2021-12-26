/*
审题错了...
不需要手动排序
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 0;
  int ans = 1;
  int arr[1010] = {0};

  /* input */
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int tmp = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i + 1] - arr[i] == 1) {
      tmp++;
      ans = max(ans, tmp + 1);
    } else {
      tmp = 0;
    }
  }

  /* output */
  printf("%d\n", ans);
  return 0;
}
