#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, ans, max = 0;
  for (int i = 0; i < 7; i++) {
    scanf("%d %d", &a, &b);
    int sum = a + b;
    if (sum != max && sum > 8) {
      if (sum >= max) {
        max = sum;
        ans = i + 1;
      }
    }
  }
  if (max == 0) {
    ans = 0;
  }
  printf("%d\n", ans);
  return 0;
}