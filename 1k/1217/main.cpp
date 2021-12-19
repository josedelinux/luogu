#include <bits/stdc++.h>

int is_prime(int n) {
  int i;
  for (i = 1; i < n; i++) {
    if (n % i == 0) break;
  }
  if (i = n)
    return 1;
  else
    return 0;
}
int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  for (int i = a; i < b; i++) {
  }
  return 0;
}