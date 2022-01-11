#include <bits/stdc++.h>

int main() {
  int n = 0;
  int cnt = 0;
  int arr[105];

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", arr[i]);
  }
  // std::sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; i++) {
      for (int k = 0; k < n; k++) {
        if (arr[i] + arr[j] == arr[k]) cnt++;
      }
    }
  }

  printf("%d\n", cnt);
  return 0;
}