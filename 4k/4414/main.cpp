#include <bits/stdc++.h>
using namespace std;

int main() {
  // input array
  int arr[4];
  // results
  int ans[4];
  // order, s[0] is zero
  char order[4];
  scanf("%d%d%d", arr + 1, arr + 2, arr + 3);
  scanf("%s", order + 1);
  sort(arr + 1, arr + 4);
  for (int i = 1; i <= 3; i++) {
    switch (order[i]) {
      case 'A':
        ans[i] = arr[1];
        break;
      case 'B':
        ans[i] = arr[2];
        break;
      case 'C':
        ans[i] = arr[3];
        break;
    }
  }
  printf("%d %d %d\n", ans[1], ans[2], ans[3]);
  return 0;
}