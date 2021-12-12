#include <bits/stdc++.h>
#define infty 100000000
using namespace std;

int main() {
  int n, minimum = infty;
  int cur;
  scanf("%d", &n);
  for (int i = 0; i < n && (scanf("%d", &cur) != -1); i++) {
    if (cur < minimum) minimum = cur;
  }
  printf("%d\n", minimum);
  return 0;
}