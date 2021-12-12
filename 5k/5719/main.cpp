#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  double suma, sumb;
  // count of sum a
  int ca = 0;
  scanf("%d%d", &n, &k);
  for (int i = 1; i <= n; i++) {
    if (i % k == 0) {
      suma += i;
      ca++;
    } else {
      sumb += i;
    }
  }
  printf("%.1f %.1f\n", suma / ca, sumb / (n - ca));
  return 0;
}