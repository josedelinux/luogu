/*
审题错了...
不需要手动排序
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 0;
  int ans = 0;
  int arr[1010] = {0};

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // nao fue preciso sort
  sort(arr, arr + n);

  // get rid of repeat ones
  std::map<int, int> cleaned;
  for (int i = 0; i < n; i++) {
    cleaned[arr[i]] = 1;
  }

  // cleaned array
  int a_c[n] = {0};
  int tc = 0;  // tmp cnt
  for (int i = 0; i < n; i++) {
    if (cleaned[i]) {
      // printf("%d ",i);
      a_c[tc++] = i;
    }
  }

  int tmp = 0;
  for (int i = 0; i < n; i++) {
    if (a_c[i + 1] - a_c[i] == 1) {
      tmp++;
      ans = max(ans, tmp + 1);
    } else {
      tmp = 0;
    }
  }

  printf("%d\n", ans);
  return 0;
}
