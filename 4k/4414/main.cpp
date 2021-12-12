#include <bits/stdc++.h>
using namespace std;

int main() {
  // results
  int a, b, c;
  // input array
  int arr[4];
  // order, s[0] is zero
  char order[4];
  scanf("%d%d%d", arr + 1, arr + 2, arr + 3);
  scanf("%s", order + 1);
  sort(arr + 1, arr + 4);
  for (int i = 1; i <= 3; i++) {
    switch (order[i]) {
      case 'A':
        a = arr[i];
        break;
      case 'B':
        b = arr[i];
        break;
      case 'C':
        c = arr[i];
        break;
    }
  }
  printf("%d %d %d\n", a, b, c);
  return 0;
}