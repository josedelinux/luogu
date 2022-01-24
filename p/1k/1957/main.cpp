/*
a表示加法运算，b表示减法运算，c表示乘法运算，
接着的两个数据表示参加运算的运算数。
*/
#include <bits/stdc++.h>
using namespace std;

int n;
char scmd[50], ans[200];
int a, b;
int k;  // command

int main() {
  /* input */
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", &scmd);
    if (isalpha(scmd[0])) {
      k = scmd[0];
      scanf("%d%d", &a, &b);
    } else {
      a = atoi(scmd);
      scanf("%d", &b);
    }

    /* handle*/
    if (k == 'a') {
      sprintf(ans, "%d+%d=%d", a, b, a + b);
    } else if (k == 'b') {
      sprintf(ans, "%d-%d=%d", a, b, a - b);
    } else {
      sprintf(ans, "%d*%d=%d", a, b, a * b);
    }
    printf("%s\n%d\n", ans, strlen(ans));
  }

  return 0;
}