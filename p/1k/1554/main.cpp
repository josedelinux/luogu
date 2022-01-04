#include <bits/stdc++.h>

using namespace std;

int main() {
  int k[10] = {0};
  int m, n;
  scanf("%d%d", &m, &n);

  for (; m <= n; m++) {
    int t = m;
    while (t > 0) {
      k[t % 10]++;
      t = t / 10;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", k[i]);
  }
  putchar('\n');
  return 0;
}