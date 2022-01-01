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
#ifdef DEBUG
    printf("got:%d\n", got);
    printf("deposit:%d\n", amt * 100);
#endif

    bank += amt * 100;
    left = got - 100 * amt;

#ifdef DEBUG
    printf("left:%d\n", left);
    printf("bank:%d\n", bank);
#endif
  }

  printf("%d\n", ans);

  return 0;
}
