#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int sign = 0;  // positive
  scanf("%d", &n);

  if (n == 0) {
    printf("%d\n", 0);
    return 0;
  } else if (n < 0) {
    sign = 1;  // negative
    n = -n;    // make it positive
  }

  int ans[15] = {0};
  int k;  // count of bits

  int ign_bits = 0;  // ignore bits count

  int zc_flag = 1;  // continous zero flag
  // we only handle last continual zero

  // convert n to array(reverse)
  for (k = 0; n > 0; k++) {
    // only handle last continul zero
    int cur = n % 10;
    int next = n % 100 / 10;
    if (zc_flag && cur != 0) {
      ans[k - ign_bits] = cur;

      if (next == 0) {  // next bit
        zc_flag = 0;
      } else {
        zc_flag = 1;
      }
    } else {
      // ignore current bits
      n = n / 10;
      ign_bits++;
      continue;
    }

    n = n / 10;
  }
  if (sign) printf("%c", '-');

  for (int i = 0; i < k - ign_bits; i++) {
    printf("%d", ans[i]);
  }
  printf("\n");
  return 0;
}