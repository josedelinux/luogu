#include <bits/stdc++.h>

using namespace std;

int main() {
  int k[10] = {0};
  int m, n;
  scanf("%d%d", &m, &n);

  for (; m <= n; m++) {
    int l = m;
    while (m >= 0) {
      k[m % 10]++;
      m = m / 10;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", k[i]);
  }
  putchar('\n');
  return 0;
}