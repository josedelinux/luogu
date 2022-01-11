#include <bits/stdc++.h>

int main() {
  int n = 0;
  int cnt = 0;
  int arr[105] = {0};
  bool checked[105] = {false};

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (!checked[k] && arr[i] + arr[j] == arr[k]) {
          cnt++;
          checked[k] = true;
        }
      }
    }
  }

  printf("%d\n", cnt);
  return 0;
}