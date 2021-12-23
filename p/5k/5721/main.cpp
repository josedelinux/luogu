#include <bits/stdc++.h>
using namespace std;

/*
tips
printf("%02d\n", 2);
*/
int main() {
  int n;
  int sum;
  scanf("%d", &n);

  // all the number we need
  for (int i = 1; i <= n; i++) sum += i;

  int k = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
      printf("%02d", k++);
    }
    putchar('\n');
    if (k > sum) {
      break;
    }
  }

  return 0;
}