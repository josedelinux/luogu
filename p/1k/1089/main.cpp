/*
sounds nasty

got = left + 300
((left + 300) - cost) / 100 = amt
left = bank - amt * 100
*/

#include <bits/stdc++.h>
using namespace std;
#define DEBUG

int main() {
  int n[13];  // cost
  int bank = 0;
  int ans = 0;
  for (int i = 0; i < 12; i++) {
    scanf("%d", &n[i]);
  }

  /* vamos  */
  int left = 0;
  for (int i = 0; i < 12; i++) {
    int got = left + 300;
    int amt = (got - n[i]) / 100;

    bank += amt * 100;
    left = got - 100 * amt;
    left = left - n[i];
    if (left < 0) {
      printf("-%d", i + 1);
      return 0;
    }

#ifdef DEBUG
    printf("----- Month %d -----\n", i + 1);
    printf("cost this month:%d\n", n[i]);
    printf("left:%d\n", left);
    printf("got:%d\n", got);
    printf("deposit:%d\n", amt * 100);
    printf("bank:%d\n", bank);
    printf("----------\n");
#endif
  }

  ans = bank + left;
  printf("%d\n", ans);

  return 0;
}
