#include <bits/stdc++.h>
using namespace std;

int main() {
  int max, a[12];
  int ans = 0;
  memset(a, 0, sizeof(a));
  for (int i = 0; i < 10; i++) {
    scanf("%d", (a + i));
  }
  scanf("%d", &max);

  for (int i = 0; i < 10; i++) {
    if (a[i] <= max + 30) {
      ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}